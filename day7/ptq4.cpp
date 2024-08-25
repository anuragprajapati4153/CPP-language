#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void printPrime(int a,int b){
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){

    int a,b;
    cin>>a>>b;
    printPrime(a,b);
    return 0;
}