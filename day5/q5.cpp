#include<iostream>
using namespace std;
int main(){

    int n,num,a=0,b=1;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<n; i++){
        num=a+b;
        a=b;
        b=num;
        cout<<num<<" ";
    }
    return 0;
}