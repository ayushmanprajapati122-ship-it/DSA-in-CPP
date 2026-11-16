#include<iostream>
using namespace std;
int main(){
    
     int arr[3][4]={{8,5,4,6,},{9,7,5,4},(4,5,3,5)};
      int sum=0;
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            
             cout<<arr[i][j]<<" ";
              sum+=arr[i][j];
           

        }
        cout<<endl;
     } 
     cout<<sum;
     
    }
