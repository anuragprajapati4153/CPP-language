#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        //for star
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        //for space
        for(int j=1; j<=2*(n-i); j++){
            cout<<"  ";
        }
        //for star
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

     for(int i=n; i>=1; i--){
        //for star
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        //for space
        for(int j=1; j<=2*(n-i); j++){
            cout<<"  ";
        }
        //for star
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
 
    return 0;

}