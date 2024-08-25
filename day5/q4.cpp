#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
bool prime;
cout<<"Enter your number: ";
cin>>n;
    for(int i=2; i<=sqrt(n); i++){
        prime=true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }
        if(prime){
            cout<<i<<endl;
        }
    }
    return 0;
}