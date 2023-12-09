#include <iostream>

using namespace std;

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};//static array of int beacouse we already declear the size of the array
    int marks[100];
    int n;
    cout<<"Enter the no of Students"<<endl;
    cin>>n;
    //input
    for (int i =0; i<n; i++){
        cout<<"Enter the number of Students"<<(i+1)<<endl;
        cin>>marks[i];
    }
    //Output 
    for (int i =0; i<n; i++){
        
        cout<<"Marks of Students" <<i+1 <<"is"<<marks[i]<<endl;
    }

    return 0;
}