#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[][4]={{2,3,4,5},{4,5,6,7},{5,6,7,8}};
    int maxsum=INT_MIN,maxrow=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }

        if(sum>maxsum){
            maxsum=sum;
            maxrow=i;
        }
        
        
        cout<<endl;
    }
    cout<<maxrow<<" "<<maxsum<<" ";
}