#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//  return n*factorial(n-1);
// }
int main(){
int n,factorial=1;
cin>>n;
// cout<<factorial(n);
for(int i=n; i>=1; i--){
    factorial=factorial*i;
}
cout<<factorial<<endl;
    return 0;
}