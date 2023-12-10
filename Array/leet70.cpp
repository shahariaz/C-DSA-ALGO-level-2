#include <iostream>

using namespace std;
int climbStairs(int n){
     int count = 0;
if(n<=1){
    return 1;
}
else{
    for(int i=0;i<n;i++){
      
      for (int j = 0; j < count; j++)
      {
         count += count;        
      }
      
         
    }
}
return count;
}
int main()
{
    int n;
    cout<<"Enter Stairs Number"<<endl;
    cin >> n;
  int count =  climbStairs(n);
  cout<<count<<endl;
    return 0;
}