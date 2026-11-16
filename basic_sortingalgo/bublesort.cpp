#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    for (int val : arr) {
        cout << val << " ";
    }
    cout<<endl;
}
int main(){

    vector<int>arr={4,5,3,2,6,};
    int n=arr.size();
    print(arr);
    
    for(int j=0;j<n;j++){
         int swaps=0;
        for(int i=0;i<n-1-j;i++){
            
            if(arr[i]>arr[i+1]){
               
            swap(arr[i],arr[i+1]);

            swaps++;

            }
        }
        if(swaps==0) break;
    
}
    print(arr);
}

