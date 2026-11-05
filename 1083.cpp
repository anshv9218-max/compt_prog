#include<iostream>
using namespace std;
int main(){
    long long x;
    cin>>x;
    long long sum=0;
    long long i=x-1;
    while(i--){
        long long n;
        cin>>n;
        sum+=n;

    }
    cout<<(x*(x+1)/2)- sum;
    return 0;
    
    
}