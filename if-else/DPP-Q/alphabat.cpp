#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter any alpahabt any digit or special syumbol";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"capital alphabatr";
    }
    else if(ch>='a' && ch<'z'){
        cout<<"small alphabate";
    
    }
    else if(ch>='0' && ch<='9'){
        cout<<"numerical digit";
    }
    else {
        cout<<"special syumbol";
    }

}