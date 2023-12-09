#include <iostream>

using namespace std;
int binary_search(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
   int mid = (s+e)/2;
     if(arr[mid]==key){
        return mid;
     }
     else if(arr[mid]<key){
         s=mid+1;
     }
     else{
         e=mid-1;
     }
    }
    return -1;
}
int main()
{
    int arr[]={3,5,23,56,75,86,444,245};
    int key =56;
    int n = sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    int index = binary_search(arr,n,key);
    cout<<index<<endl;
    return 0;
}