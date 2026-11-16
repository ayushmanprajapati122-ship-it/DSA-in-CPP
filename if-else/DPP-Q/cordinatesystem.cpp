#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"x1,y1,x2,y2,x3,y3:-";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1)){
        cout<<"ponter are collinear"<<endl;
    }
    else{
        cout<<"pointer are not collinear";
    }
}