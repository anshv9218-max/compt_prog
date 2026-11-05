import urllib.request
import urllib.error
import json
import time

def get_solved_problems(handle):
    url = f"https://codeforces.com/api/user.status?handle={handle.strip()}"
    try:
        req = urllib.request.Request(url, headers={'User-Agent': 'Mozilla/5.0'})
        with urllib.request.urlopen(req) as response:
            data = json.loads(response.read().decode('utf-8'))
    except urllib.error.HTTPError as e:
        error_msg = e.read().decode('utf-8')
        print(f"❌ Error for handle '{handle}': Handle exist nahi karta ya spelling galat hai! ({error_msg})")
        return None
    except Exception as e:
        print(f"❌ Connection Error for {handle}: {e}")
        return None
        
    solved = {}
    for sub in data['result']:
        if sub.get('verdict') == 'OK':
            prob = sub['problem']
            # Unique problem key: ContestID + Index (ya Name agar gym problem ho)
            prob_id = f"{prob.get('contestId', '')}{prob.get('index', '')}"
            prob_name = prob.get('name', 'Unknown')
            prob_rating = prob.get('rating', 9999) # 9999 for unrated sorting
            
            # Name se bhi match karenge taaki duplicate contest versions hat jayein
            solved[prob_name] = (prob_id, prob_name, prob_rating)
            
    print(f"✅ {handle}: Total {len(solved)} unique problems solved.")
    return solved

# Yahan apna exact Codeforces handle check karke daalo:
GOURAV_HANDLE = "anshv9218"  # <-- Check karo kahin "gouravarora" toh nahi?
ANSH_HANDLE = "gouravarrorra"

gourav_solved = get_solved_problems(GOURAV_HANDLE)
time.sleep(2)  # Codeforces API rate-limit se bachne ke liye 2 sec gap
ansh_solved = get_solved_problems(ANSH_HANDLE)

if gourav_solved is not None and ansh_solved is not None:
    # Problem Name aur ID dono se filter karenge
    gourav_ids = {v[0] for v in gourav_solved.values()}
    
    todo_list = [
        v for name, v in ansh_solved.items() 
        if name not in gourav_solved and v[0] not in gourav_ids
    ]

    # Rating ke hisaab se sort
    todo_list.sort(key=lambda x: x[2])

    print(f"\n🎯 Total problems solved by Gourav but NOT by Ansh: {len(todo_list)}\n")
    for prob_id, name, rating in todo_list:
        disp_rating = "Unrated" if rating == 9999 else rating
        # Link generation (supports C1, B2 etc.)
        i = 0
        while i < len(prob_id) and prob_id[i].isdigit():
            i += 1
        contest_id, index = prob_id[:i], prob_id[i:]
        link = f"https://codeforces.com/problemset/problem/{contest_id}/{index}"
        print(f"[{disp_rating}] {prob_id} - {name}: {link}")