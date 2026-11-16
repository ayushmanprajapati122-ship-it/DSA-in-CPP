#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a first side :";
    cin>>a;
    cout<<"enter a second side :";
    cin>>b;
    cout<<"enter a third side :";
    cin>>c;
    
    if(a+b>c && a+c>b && c+b>a) cout<<"trangle is possible";
    else cout<<"trangle is not possible";
}
