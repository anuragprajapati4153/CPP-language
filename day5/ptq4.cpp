#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter your number: ";
    cin>>n;
    while(n>0){
        (n%10)%2==0?sum=sum+n%10:sum=sum;
        n/=10;
    }
    cout<<sum;
    return 0;
}