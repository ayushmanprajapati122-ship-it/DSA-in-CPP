#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[][4] = {{2, 3, 5, 6}, {6, 7, 8, 5}, {9, 9, 8, 3}};

    int maxrow = -1, maxsum = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i] [j];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
            maxrow = i;
        }
    }
    cout << maxrow << " " << maxsum << endl;
}