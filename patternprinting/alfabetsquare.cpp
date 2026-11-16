#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i % 2 == 0)
            {
                cout << (char)(i + 64) << " ";
            }
            else
            {
                cout << (char)(i + 96) << " ";
            }
        }
        cout << endl;
    }
}