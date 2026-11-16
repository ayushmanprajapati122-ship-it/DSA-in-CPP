#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="ayuhman prajapti";
    int n =s.size();
    int count =0;
    for(int i=1; i<n; i++){
        char ch =s[i];
        if(ch>=65 || ch>=90) ch+=32;
        if(s[i]=='a') count++;
        if(s[i]=='e') count++;
        if(s[i]=='i') count++;
        if(s[i]=='o') count++;
        if(s[i]=='u') count++;
       
    }
     cout<<count<<endl;
}