#include <iostream>
using namespace std;
int main()
{
    int arr[] = {45, 56, 34, 56, 45, 68, 99, 70};
    int n = sizeof(arr) / 4;
    int mn = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mn)
            mn = arr[i];
    }
    cout << mn;
}