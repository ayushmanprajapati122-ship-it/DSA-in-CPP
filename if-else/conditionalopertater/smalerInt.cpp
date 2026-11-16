#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a first number";
    cin>>a;
    cout<<"enter a second number";
    cin>>b;
    cout<<"enter a third number";
    cin>>c;
    if(a<b && a<c) cout<<" the  first number is smaller";
    else if (b<a && b<c) cout<<"the  second number is smaller";
    else cout<<"the  third number is smaler";

}