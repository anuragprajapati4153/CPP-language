#include<iostream>
using namespace std;
int main(){
  int a;
    int *ptr=&a;
    cout<<&a<<" = "<<ptr<<endl;
    cout<<*(ptr);
    cout<<sizeof(ptr)<<" "<<sizeof(a);

 
    return 0;
}
  