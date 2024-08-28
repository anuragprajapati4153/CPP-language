#include<iostream>
using namespace std;
bool valueAppears(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j] && i!=j){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,3,4,5,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<valueAppears(arr,n)<<endl;
    return 0;
}