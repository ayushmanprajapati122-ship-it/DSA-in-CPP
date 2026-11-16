#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "enter a number";
    cin >> n;
    // for(i=n;i>=1;i--){
    //     for(j=1;j<=n-i;j++){
    //         cout<<" "<<" ";
    //     }

    //     for(j=1;j<=2*i-1;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // method 2

    int nst = 2 * n - 1, nsp = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= nst; j++)
        {
            cout << "*";
        }
        cout << endl;
        nsp++;
        nst -= 2;
    }
}