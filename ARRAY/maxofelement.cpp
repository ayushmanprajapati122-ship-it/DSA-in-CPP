#include <iostream>
using namespace std;
#include <climits>
int main()
{
    int arr[5] = {34, 45, 35, 23, 46}; 
    int n = sizeof(arr) / 4;
    int mx = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    cout << mx;
}