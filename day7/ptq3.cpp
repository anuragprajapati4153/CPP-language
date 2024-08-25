#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    while(n>1){
        fact=fact*n--;
    }
    return fact;
}

int binomial(int n,int r){
    return (factorial(n))/(factorial(r)*factorial(n-r));
}
int main(){

    int n,r;
    cin>>n>>r;
    cout<<"Number of ways: "<<binomial(n,r);
    return 0;
}