#include<iostream>
using namespace std;
int main(){

    int n,num=0,lastdigit;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        lastdigit=n%10;
        n/=10;
        num=num*10+lastdigit;
    }
    cout<<"Reverse is: "<<num;

    return 0;
}