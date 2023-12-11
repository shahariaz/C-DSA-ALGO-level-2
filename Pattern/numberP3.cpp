/* 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i,j;
    for(i=n;i>=1;i--){
        for(j=n;j>=1;j--){
           cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}