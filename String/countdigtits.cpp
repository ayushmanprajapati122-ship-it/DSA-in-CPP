#include<iostream>
#include<string>
using namespace std;
int main(){
    // int n;
    // cout<<"enter a number";
    // cin>>n;
    // string s= to_string(abs(n));
    // cout<<s.length()<<endl;

    string s;
    cout<<"enter a number";
    getline(cin,s);
    for(int i=0 ; i<s.length(); i++)
    if(s[i]>=97 &&  s[i]<=122)
    s[i] -=32;
    else if (s[i]>=65 && s[i]<=97)
    s[i] +=32;    
    cout<<s<<endl;

}