#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a>0){
        cout<<"Positive number!";
    }else if(a==0){
        cout<<"Number is zero!";
    }else{
        cout<<"Negative number!";
    }
    return 0;
}