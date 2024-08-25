#include<iostream>
using namespace std;
int main(){
    float itm1,itm2,itm3;
    cout<<"Enter your three item price: ";
    cin>>itm1>>itm2>>itm3;
    int total=itm1+itm2+itm3;
    total=total+(total*18)/100;
    cout<<"Total is: "<<total;
    return 0;
}