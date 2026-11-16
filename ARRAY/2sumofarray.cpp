#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&ans){
    for(int ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;

}
int main(){
vector<int>arr={3,5,7,8,9,6};
int target=8;
int n=arr.size();
for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){

    if(arr[i]+arr[j]==target) {

        ans[0]=1;
        ans[1]=1;
    }

    }
}
print(ans);
}
