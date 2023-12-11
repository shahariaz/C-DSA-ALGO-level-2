/* 
     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *

 */

#include <iostream>

using namespace std;

int main()
{
    
    int i,n;
     cin >> n;
    for(i=1;i<=n;i++){
        int j;
        for(j=n;j>i;j--){
            cout<<" ";

        }
        for ( j = 1; j <=i; j++)
        {  
            cout<<"*"<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}