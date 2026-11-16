#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:-";
    cin>>n;
    if(n%15 == 0){
        cout<<"the numbe is divided by 3 and 5";
    }
    else{
        cout<<"the number is not divided by 3 and 5";
    }
}