#include<iostream>
#include<climits>
using namespace std;

void maxProfit(int *arr, int n){
    int bestBuy[100000]; //for max size of variable
    bestBuy[0]=INT_MAX; //first day can't be selling day
    for(int i=0; i<n; i++){
        bestBuy[i+1]=min(bestBuy[i],arr[i]);
        cout<<bestBuy[i]<<", ";
    }
    cout<<endl; 
    int maxProfit=0;
    for(int i=0; i<n; i++){
        maxProfit=max(maxProfit,arr[i]-bestBuy[i]);
    }
  
  cout<<maxProfit<<endl;
}

int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    maxProfit(arr,n);

    return 0;
}