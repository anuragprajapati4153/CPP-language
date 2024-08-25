#include<iostream>
#include<math.h>
using namespace std;

int binToDec(int num){
    int n=num,lastdigit,cout=0,sum=0;
    while(n>0){
        lastdigit=n%10;
        sum=sum+lastdigit*pow(2,cout++);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<binToDec(n)<<endl;
    return 0;
}