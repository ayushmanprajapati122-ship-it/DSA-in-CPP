#include<iostream>
using namespace std;
void change(int *ptr)
{
    *ptr = 20;          //thsi is pass by value
}
int main()
{
    int x = 10;
    change(&x);
    cout << x << endl;
}