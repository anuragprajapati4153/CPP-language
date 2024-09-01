#include <iostream>
#include <climits>
using namespace std;
void maxSum(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << maxSum << endl;
}
int main()
{

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = 6;
    maxSum(arr, n);

    return 0;
}