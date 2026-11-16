#include<iostream>
using namespace std;
// int main(){
//     int x=6;
//     {
//         int  x =8;

//     }
//     cout<<x;
// }

 // :: scope resulation operator global scope ko access kerne ke liya 
 int x=8;
 int main(){
    int x =60;
    cout<<x<<endl;
    cout<<::x<<endl;
 }