#include<iostream>
using namespace std;
class Crickter{
    public:
    string name;
    int runs;
    float average;
    Crickter(string name,int runs,float average){
        this->name=name;
        this->runs=runs;
        this->average=average;
    }
     
    void print(){

        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;   

    }
};

int main(){

    Crickter c1("virat Kohli",14000,58.1);
    Crickter c2("sachin Tendulkar",14000,58.1);
    Crickter c3("Rohit sharma",14000,58.1);
    Crickter* p=new Crickter("ABD",10000,55.2); 
    p->print();

    Crickter* ptr=&c1;
    ptr->average=74.2; //(*ptr).average=74.2;
    cout<<c1.average<<endl;
    cout<<ptr->name<<endl; //this is right way


}