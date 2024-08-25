#include<iostream>
using namespace std;

int reverse(int n){
    int num=0,lastDigit;
    while(n>0){
        lastDigit=n%10;
        num=num*10+lastDigit;
        n/=10;
    }
    return num;
}

bool isPalindrome(int n){
    if(n==reverse(n)){
        return true;
    }else{
        return false;
    }
}

int sumDigit(int n){
    int sum=0;
    while(n>0){
        sum=sum+(n%10);
        n/=10;
    }
    return sum;
}

int square(int a, int b){
    return a*a+b*b+2*a*b;
}
int main(){

    int n;
    cin>>n;
    cout<<square(2,3);
    if(isPalindrome(n)){
        cout<<"Yes bro!";
    }else{
        cout<<"Sorry bro!";
    }
    cout<<endl;
    cout<<sumDigit(n)<<endl;
    return 0;
}