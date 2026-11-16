
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr={179,124,99,87,44,22,-4};


    int target=99;
    int n=arr.size();
    int lo=0,hi=n-1;

    while(lo<=hi){
        int mid =(lo+hi)/2;
        if(arr[mid]>target) lo=mid+1;
        else if(arr[mid]<target) hi=mid-1;
        else {

               cout<<mid;
               return 0;
             
        }
        
        
    }


    cout<<" result nto found";

    
}