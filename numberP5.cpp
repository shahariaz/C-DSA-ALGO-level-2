/*   1
    2 2
  3 3 3
4 4 4 4 */

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
            cout<<i<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}