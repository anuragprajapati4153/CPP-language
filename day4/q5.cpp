#include<iostream>
using namespace std;
int main(){

    int digit,sum=0,num;
    cout<<"Enter a number: ";
    cin>>num;
    int n=num;
    while(n>0){
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n/=10;

    }
    if(num==sum){
        cout<<"An armstrong Number!";
    }else{
        cout<<"Not an armstrong number!";
    }
    return 0;
}