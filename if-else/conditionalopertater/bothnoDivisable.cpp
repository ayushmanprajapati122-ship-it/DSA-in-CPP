#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    // if(n%5==0 ) cout<<"kartikey";
    // else if (n%3==0) cout<<"sakshi";
    // else if (n%5==0 && n%3==0) cout<<"Anuj";
    // else if (n%5==0 || n%3==0) cout<<"Hitesh";
    if(n%5==0 && n%3==0) cout<<"anuj";
    else if (n%5==0) cout<<"kartikey";
    else if (n%3==0) cout<<"sakshi";
    else cout<<"hitesh";

}
