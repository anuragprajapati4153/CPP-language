#include<iostream>
#include <climits>
using namespace std;

void printSumOfsubarry(int *arr, int n){
    int maxSum=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            cout<<sum<<", ";
            maxSum=max(maxSum,sum);
        }
        cout<<endl;
    }
    cout<<"Our maxSum is = "<<maxSum<<endl;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=6;
    printSumOfsubarry(arr,n);
    return 0;
}