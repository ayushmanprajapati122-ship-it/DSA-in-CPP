#include<iostream>
using namespace std;
int main(){
    int j,i;
    for(j=1;j<=4;j++){
        for(i=1;i<=4;i++){
            cout<< (char)(i+64)<<" ";
        }
        cout<<endl;
    }
}