#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number multiple time: ";
    while(true){
        cin>>a;

        if(a%10==0){
            break;
        }
    }
    return 0;
}