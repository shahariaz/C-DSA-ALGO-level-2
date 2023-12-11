/*      1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1 */
#include <iostream>

using namespace std;

int main()
{
    
    int i,n;
     cin >> n;
    for(i=1;i<=n;i++){
        int j;
        for(j=n;j>i;j--){
            cout<<"  ";

        }
        for ( j = 1; j <=i; j++)
        {  
            cout<<j<<" ";
        }
        
        for ( j = i; j>1; j--)
        {  
            cout<<j-1<<" ";
            
        }
        
        cout<<endl;
    }
    return 0;
}