#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};    //index 1 se 3 tka ki swaping ho rahi hai  
    print(arr);

    int i = 1, j = 4;

                   while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;

       
    }
      print(arr);
    

}