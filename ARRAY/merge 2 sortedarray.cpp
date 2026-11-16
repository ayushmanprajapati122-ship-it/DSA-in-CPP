
#include<iostream>
using namespace std;
int main(){
    
    int a[5]={10,20,40,60,90};
    int b[5]={30,50,70,80,100};
     int m=sizeof(a)/4; 
     int n=sizeof(b)/4;
     int c[m+n];
     int i=0,j=0,k=0;

     while(i<m && j<n){

        if(a[i]<b[j]){
            c[k]=a[i];
        i++;
        k++;
        }
        else {
            c[k]=b[j];        
            j++;
            k++;

     }

     }
     for(i=0;i<m+n;i++) {
        cout<<c[i]<<endl;
     }
}