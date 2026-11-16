#include<iostream>
using namespace std;
int main(){

    int arr[][4]={{4,5,6,4},{4,5,6,7}};
    for(int j=0;j<=3;j++){
        for(int i=0;i<=1;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    } 

}