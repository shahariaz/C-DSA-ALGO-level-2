#include <iostream>

using namespace std;
void printSubArray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    printSubArray(arr,n);

    return 0;
}
/* hw
find the sum of all sub arrays and print the maximum sum
 */
