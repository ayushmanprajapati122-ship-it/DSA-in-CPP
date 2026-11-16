#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter a number";
    cin>>n;
    for(i=2; i<=3*n-1;i+=3){
        cout<<i<<" ";
    }
}