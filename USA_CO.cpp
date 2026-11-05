// // mixing milk
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int m1,c1,m2,m3,c2,c3;
//     cin>>c1>>m1>>c2>>m2>>c3>>m3;
//     for(int i=1;i<=100;i++){
//         if(i%3==0){ // buc 3->1
//             if(c1>m1+m3){
//                 m3=0;
//                 m1=m1+m3;
//             }
//             else{
//                 m3=m1+m3-c1;
//                 m1=c1;
//             }
//         }
//         else if(i%3==2){ //buc2-> 3
//             if(c3>m2+m3){
//                 m2=0;
//                 m3=m2+m3;
//             }
//             else{
//                 m2=m2+m3-c3;
//                 m3=c3;
//             }
//         }
//         else{ // buc 1->2
//             if(c2>m2+m1){
//                 m1=0;
//                 m2=m1+m2;
//             }
//             else{
//                 m2=m1+m2-c2;
//                 m1=c1;
//             }
//         }
//     }
//     cout<<m1<<" "<<m2<<" "<<m3;

// }

#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int sum=0;
    int i=x-1;
    while(i--){
        int n;
        cin>>n;
        sum+=n;

    }
    cout<<(x*(x+1)/2)- sum;
    return 0;
    
    
}