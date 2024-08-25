#include<iostream>
using namespace std;
int main(){

    int n;
    bool prime=false;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"Not a prime number!";
           prime=true;
            break;
        }
    }
    if(!prime){
cout<<"Prime Number!";
    }
    
    return 0;
}