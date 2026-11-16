#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele;
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {3, 5, 7, 8, 6};
    int n = arr.size();

    print(arr);
    // selection sort
    for (int j = 0; j < n - 1; j++)
    {
        int mn = arr[j], minidx = j;
        for (int i = j; i < n; i++)
        {
            if (arr[i] < mn)
            {
                mn = arr[i];
                minidx = i;
            }
        }
        swap(arr[j], arr[minidx]);
    }

    print(arr);
}