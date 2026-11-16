#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&arr){//byreference passing elemnt 
    for( int ele:arr)
        cout<<ele<<" ";


    cout<<endl;
}
int main(){

    // vector<int>arr={10,20,30,40,50,60,70};
    // int m=arr.size();
    // int i=0,j=m-1;
    // while(i<j){
    //     swap(arr[i],arr[j]);
    //     i++;
    //     j--;
    // }

    vector<int>arr={10,20,30,40,50,60};
    int i=1,j=3;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    print(arr);


}