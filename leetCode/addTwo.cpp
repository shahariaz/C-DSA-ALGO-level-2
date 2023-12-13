#include <iostream>

using namespace std;

int main()
{
    int n;
    while (n)
    {
        cin >> n;
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {

                cout << j * j << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}