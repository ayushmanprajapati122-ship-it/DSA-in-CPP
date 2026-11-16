#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="ayush";
    s.pop_back();
    s.push_back('k');
    cout<<s<<endl;
    sort(s.begin(),s.end());
}



