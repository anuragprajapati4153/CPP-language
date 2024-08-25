#include<iostream>
using namespace std;
int product(int a, int b){
    return a*b;
}

bool isEven(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    // int a,b;
    // cin>>a>>b;
    int n;
    cin>>n;

    cout<<isEven(n) ? "Even":"Odd";
    return 0;
}