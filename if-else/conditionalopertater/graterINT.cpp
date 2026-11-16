#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a  first number";
    cin>>a;
    cout<<"enter a  second number";
    cin>>b;
    cout<<"enter a  third number";
    cin>>c;
    if(a>b && a>c  ) cout<<"the  first number is largest";
    else if (b>a && b>c) cout<<"the  second number is largest";
    else  cout<<"the  third number is largest";

}
