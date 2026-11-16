#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter a first number";
    cin >> n1;
    cout << "enter a second number";
    cin >> n2;

    if (n1 % 2 != 0 && n2 % 2 != 0)
    {
        cout << "both number is odd";
    }
    else if (n1 % 2 != 0 || n2 % 2 != 0)
    {
        cout << "one number is odd";
    }
    else
    {
        cout << "none is odd";
    }
}