// Problem Statement: Given an array find the maximum sum of subarray.
//solving it in brute force approach
#include <iostream>

using namespace std;
int sumOfSubArray(int arr[],int n){
    
    int maximumSum =0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currSum =0;
            for(int k=i;k<=j;k++){
                currSum += arr[k];
            }
            maximumSum = max(maximumSum,currSum);
        }
       
    }
    return maximumSum;

}
int main()
{
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<sumOfSubArray(arr,n);
    return 0;
}