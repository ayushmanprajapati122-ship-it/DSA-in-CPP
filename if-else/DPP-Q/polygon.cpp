#include<iostream>
using namespace std;
int main(){
    int n,s;
    cout<<"enter sides";
    cin>>n;
    cout<<"enter sum";
    cin>>s;
    if(n>2 && s == (n - 2)*180){
        cout<<"valid polygon";
    }
    else{
        cout<<"unvalid polygon";
    }
}

