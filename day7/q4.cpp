#include<iostream>
using namespace std;

int largestOf3(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    } else if(b>c){
        return b;
    }else{
        return c;
    }
}

 char character(char ch){
    if(ch=='z' || ch=='Z'){
        ch=ch-26;
    }
    return ch+1;
 }
int main(){

    // int a,b,c;
    // cout<<"Enter your three number: ";
    // cin>>a>>b>>c;
    // cout<<"Largest no: "<<largestOf3(a,b,c)<<endl;

char ch;
cin>>ch;
cout<<character(ch)<<endl;
    return 0;
}