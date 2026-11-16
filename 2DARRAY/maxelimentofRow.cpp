#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[][4]={{2,3,4,5},{6,7,8,8},{9,9,7,1}};
     int minrow=-1, minsum=INT_MAX;
     for(int i=0;i<3;i++){
        int  sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
            if(sum<minsum){
            minsum=sum;
            minrow=i;
            }

        
        cout<<endl;
     }
     cout<<minrow<<" "<<minsum<<" ";
}