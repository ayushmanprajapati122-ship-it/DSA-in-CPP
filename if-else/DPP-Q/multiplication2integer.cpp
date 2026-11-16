#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter a fisrt number";
    cin>>n1;
    cout<<"enter a second number";
    cin>>n2;
    
    if (n1==0 || n2==0)
    {
        cout<<"the product is zero"<<endl;
    }
    else if (n1>0 && n2>0)
    {
        cout<<"the product is positve ";
    }
    else if (n1<0 || n2<0){
        cout<<"the product  is negative"<<endl;
    }
    
}