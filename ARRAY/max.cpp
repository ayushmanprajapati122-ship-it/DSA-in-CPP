#include <iostream>
using namespace std;
int main()
{
    int arr[] = {
        34,
        45,
        32,
        48,
        34,
        56,
    };
    int n = sizeof(arr) / 4;
    int mx = 0;
    for (int i = 0; i <= n; i++)
    {

        if (arr[i] > mx)
            mx = arr[i];
    }
    cout << mx;
}