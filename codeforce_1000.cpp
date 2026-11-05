// // 1 A Theatre Square 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n,m,a;
//     cin>>m>>n>>a;
//     long long l=(m+a-1)/a;
//     long long b=(a+n-1) /a;
//     cout<<l*b;
// }

// // 230 A dragona
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long s,n;
//     cin>>s>>n;
//     while(n--){
//         long x,y;
//         cin>>x>>y;
//         if(s<x){
//             cout<<"NO";
//             return 0;
//         }
//         s+=y;
//     }
//     cout<<"YES";
//     return 0;
// }


// // 230 A Dragons (2)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long s,n;
//     vector<pair<long,long>> st;
//     cin>>s>>n;
//     while(n--){
//         long x,y;
//         cin>>x>>y;
//         st.push_back({x,y});
//     }
//     sort(st.begin(),st.end());
//     for(int i=0;i<st.size();i++){
//         if(st[i].first>=s){
//             cout<<"NO";
//             return 0;
//         }
//         s+=st[i].second;
//     }
//     cout<<"YES";
//     return 0;
// }

// 158 B Taxi
#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,count=0;
    cin>>n;
    int cap=0;
    vector<int> out;
    while(n--){
       int i;
       cin>>i;
       out.push_back(i);
    }
    sort(out.begin(),out.end());
    for(auto x:out){
        cap+=x;
        if(cap==4){
            count++;
            cap=0;
        }
    }
    cout<<count;
}
