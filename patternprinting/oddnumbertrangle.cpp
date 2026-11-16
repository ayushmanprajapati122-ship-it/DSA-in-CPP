#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout<<(2*j-1)<<" ";
        }
        cout << endl;
    }
}