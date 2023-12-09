#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i =0; i<n; i++){
         cout<<sizeof(arr)<<endl;
        cout<<"Marks of Students" <<" " <<i+1 <<" " <<"is "<<arr[i]<<endl;
    }
}
 
 int main()
 {
   int arr[]={1,2,3,4,5};
   int n = sizeof(arr)/sizeof(int);
    printArray(arr,n);
    cout<<sizeof(arr)<<endl;
    return 0;
 } 
