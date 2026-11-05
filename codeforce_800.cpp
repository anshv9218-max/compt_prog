//282A  bit++
// #include<iostream>
// using namespace std;
// int main(){
//     int n,cnt=0;
//     cin>>n;
//     while(n--){
//         string s;
//         cin>>s;
//         if(s[1]=='+'){
//             cnt++;
//         }
//         else{
//             cnt--;
//         }
//     }
//     cout<<cnt;
//     return 0;
// }

// 158 A Next Round
// #include<iostream>
// using namespace std;
// int main(){
//     int n,k,select=0,out=0;
//     cin>>n>>k;
//     int arr[n]={0};
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(i==k-1){
//             select=arr[i];
//         }
//     }
//     for(auto x:arr ){
//         if(x>=select && x>0) out++; 
//     }
//     cout<<out;
//     return 0;
    
// }

// 50 A domino Piling
// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     cout<<(m*n)/2;
//     return 0;
// }

// 443 A  Anton and Letters
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     int arr[26];
//     for(int i=0;i<s.size();i++){
//         if(s[i]>=97 && s[i]<=122){
//             int x =s[i];
//             arr[s[i]-97]=1;
//         }

//     }
//     int cnt=0;
//     for(int i=0;i<26;i++){
//         if(arr[i]==1){
//             cnt++;
//         }
//     }
//     cout<<cnt;
//     return 0;

// }


// 996A hit the lottery
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int c,cnt=0;
//     cin>>c;
//     // int arr[5]={1,5,10,20,100};
//     // int i=5;
//     // while(c){
//     //     int rem=
//     // }
//     cnt=c/100;
//     c=c%100;
//     cnt+=c/20;
//     c=c%20;
//     cnt+=c/10;
//     c=c%10;
//     cnt+=c/5;
//     c=c%5;
//     cnt+=c;
//     cout<<cnt;
//     return 0;
// }


// // 281A Word Capitalization
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     s[0]=toupper(s[0]);
//     cout<<s;
//     return 0;
// }

// 236 A BOy or girl
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     int arr[26]={0},cnt=0;
//     cin>>s;
//     for(int i=0;i<s.size();i++){
//         int c=s[i];
//         arr[c-97]=1;
//     }
//     for(int j=0;j<26;j++){
//         if(arr[j]) cnt++;
//     }
//     if(cnt%2==1){
//         cout<<"IGNORE HIM!";
//         return 0;
//     }
//     cout<<"CHAT WITH HER!";
//     return 0;
   
// }

// // 59 A Word
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     int lcount=0,ucount=0;
//     cin>>str;
//     for(int i=0;i<str.length();i++){
//         if(islower(str[i])) lcount+=1;
//         else ucount+=1;
//     }
//     lcount>=ucount?transform(str.begin(),str.end(),str.begin(),::tolower): transform(str.begin(),str.end(),str.begin(),::toupper);
//     cout<<str;
//     return 0;
// }

// // 339 Helpful maths
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int n=s.length();
//     int c1=0,c2=0,c3=0;
//     for(int i=0;i<n;i=i+2){
//         if(s[i]=='1')c1++;
//         else if(s[i]=='2')c2++;
//         else c3++;
//     }
//     for(int i=0;i<n;i++){
//         if(i%2!=0){
//             s[i]='+';
//         }
//         else{
//             if(c1>0){
//                 s[i]='1';
//                 c1--;
//             }
//             else if(c2>0){
//                 s[i]='2';
//                 c2--;
//             }
//             else{
//                 s[i]='3';
//                 c3--;
//             }
//     }
//     }
//     cout<<s;
//     return 0;
// }

// 1742 A Sum
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,a,b,c;
//     cin>>n;
//     while(n--){
//         cin >>a>>b>>c;
//         if(a+b==c || b+c==a ||a+c==b) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;  
//     }
//     return 0;
// }

// // 520 A paragram
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string str;
//     cin>>str;
//     int arr[26]={0};
//     for(auto ch:str){
//         int x=tolower(ch);
//         arr[x-'a']=1;

//     }
//     for(auto val:arr){
//         if(val==0){
//             cout<<"NO";
//             return 0;
//         }
//     }
//     cout<<"YES";
//     return 0;
// }


// // 734 A  Anton and Danik
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,dcnt=0,acnt=0;
//     cin>>n;
//     while(n--){
//         char ch;
//         cin>>ch;
//         if(ch=='A') acnt++;
//         else dcnt++;
//     }
//     if(acnt>dcnt) cout<<"Anton";
//     else if(dcnt>acnt) cout<<"Danik";
//     else cout<<"Friendship";

//     return 0;
// }

// // 1703 A  YES or YES?
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string str;
    
//     while(n--){
//         cin>>str;
//         transform(str.begin(),str.end(),str.begin(),::tolower);
//         if(str=="yes") cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;;
        
//     }
//     return 0;
// }

// // 141 A Assuming joke
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str1,str2,str3;
//     cin>>str1>>str2>>str3;
//     if(str1.size()+str2.size()!=str3.size()){
//         cout<<"NO";
//         return 0;
//     }
//     string demo=str1+str2;
//     int str3_arr[26]={0};
//     int demo_arr[26]={0};
//     for(int i=0;i<demo.size();i++){
//         int demo_c=demo[i];
//         int str_c=str3[i];
//         demo_arr[demo_c-'A']+=1;
//         str3_arr[str_c-'A']+=1;
//     }
//     for(int j=0;j<26;j++){
//         if(str3_arr[j]!=demo_arr[j]){
//             cout<<"NO"<<endl;
//             return 0;
//         }
//     }
//     cout<<"YES"<<endl;
//     return 0;
// }

// // 141 A Assuming joke approach -2
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1,s2,s3;
//     cin>>s1>>s2>>s3;
//     int arr[26]={0};
//     for(auto ch:s1){
//         arr[ch-'A']++;
//     }
//     for(auto ch:s2){
//         arr[ch-'A']++;
//     }
//     for(auto ch:s3){
//         arr[ch-'A']--;
//     }
//     for(auto x:arr){
//         if(x!=0){
//             cout<<"NO"<<endl;
//             return 0;
//         }
//     }
//     cout<<"YES"<<endl;
//     return 0;

// }

// //546 A Soldier and Bananas
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int cst_f,dollor,banana;
//     cin>>cst_f>>dollor>>banana;
//     int total_cost=cst_f*banana*(banana+1)/2;
//     if(total_cost>dollor) cout<<total_cost-dollor;
//     else cout<<0;
//     return 0;
// }

// // 705 A HUlk
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,i=1;
//     cin>>n;
//     while(i<=n){
//         if(i==n&& i%2==0) cout<<"I love it";
//         else if(i==n&& i%2!=0) cout<<"I hate it";
//         else if(i%2!=0) cout<<"I hate that ";
//         else cout<<"I love that ";
//         i++;
//     }
//     return 0;
// }
// //   bear and brother

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int lw,bw,y=0;
//     cin>>lw>>bw;
//     while(lw<=bw){
//         lw=lw*3;
//         bw=bw*2;
//         y++;
//     }
//     cout<<y;
    
// }



// // 977 A wrong subtraction
// #include<iostream>
// using namespace std;
// int main(){
//     int num,n;
//     cin>>num>>n;
//     while(n--){
//         if(num%10==0) num=num/10;
//         else num--;
//     }
//     cout<<num;
//     return 0;
// }

// //  1352 A round numbers
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>ans;
//         int place=1;
//         while(n>0){
//             int digit=n%10;
//             if (digit!=0) ans.push_back(digit * place);
//             n/=10;
//             place*=10;
//         }
//         cout<<ans.size()<<endl;
//         for(int x: ans){
//             cout<<x<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

