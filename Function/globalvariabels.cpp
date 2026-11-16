#include <iostream>
using namespace std;

int x = 7; // this is global variable

void fun()
{
    x = 23;
}
int main()
{
    cout << x << endl;
    fun();
    cout << x << endl;
}

/*int mian(){
    int x=79;   //local variavel
    cout<<x<<endl;
}*/