#include<iostream>
using namespace std;
int main(){
    int arr[5]={24,45,35,23,34};
    int n=sizeof(arr)/4;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=arr[i];

    }

    cout<<sum<<endl;
    
}