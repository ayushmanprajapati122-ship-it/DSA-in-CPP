#include <iostream>
using namespace std;
void fun(int age = 20) { // this  is a define variable

    cout << "my age is " << age << endl;
}
int main()
{
    fun();
}