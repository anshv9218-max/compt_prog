#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;  
    long long max_r=0;
    long  long i=0,j=0;
    while(j<(int)s.size()){
        if(s[i]==s[j]){
            j++;
        }
        else {
            i=j;
        }
        max_r=max(max_r,j-i);
    }
    cout<<max_r;
    return 0;
}