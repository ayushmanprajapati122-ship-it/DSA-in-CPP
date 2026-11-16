#include <iostream>
using namespace std;
int main()
{
    int count = 0, n;
    cout << "enter a digit:-";
    cin >> n;

    while (n > 0)
    {
        n /= 10;
        count++;
    }
    cout << count;
}