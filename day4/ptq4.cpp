#include<iostream>
using namespace std;
int main(){

    char op;
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter operator: ";
    cin>>op;
    switch(op){
        case '+':
         cout<<"Sum is ",a+b;
         break;
         case '-':
         cout<<"Subtraction is "<<a-b;
         break;
         case '*':
         cout<<"Multiplication is "<<a*b;
         break;
         case '/':
         cout<<"Division is "<<a/b;
         break;
         default :
         cout<< "Invalied Operator!";
    }

    return 0;
}