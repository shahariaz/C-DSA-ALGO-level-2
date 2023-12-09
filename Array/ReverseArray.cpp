#include <iostream>

using namespace std;
void reverseArray(int array[], int n){
    int s =0;
    int e = n-1;
    while(s<e){
        swap(array[s],array[e]);
        s++;
        e--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, n);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}