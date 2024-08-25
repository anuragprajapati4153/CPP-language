#include<iostream>
using namespace std;

int linearSearch(int *arr,int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}



void printArr(int *arr){
     for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<" ";
    }
}

void assignArr(int *arr, int *brr){
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        arr[i]=brr[i];
    }
}
int main(){
int n,key;
cin>>n;  
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
    cin>>key;
    cout<<"Your index is: "<<linearSearch(arr,n,key)<<endl;
    int brr[n];
    for(int i=0; i<n; i++){
        brr[i]=arr[n-1-i];
    }
    assignArr;
    printArr;
    
    return 0;
}  