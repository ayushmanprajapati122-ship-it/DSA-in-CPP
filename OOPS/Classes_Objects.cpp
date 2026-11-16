#include<iostream>
using namespace std;

class Student{
 public:

    string name;
    int rno;
    float cgpa; 

    Student(string n, int r, float c){
        name=n;
        rno=r;
        cgpa=c;

    }

    Student(){
 
    }

};

int main(){

    Student x("Ayushman prajapati",25,7.5) ;  //x is ans object/variable
   
    cout<<x.name<<" "<<x.rno<<" " <<x.cgpa<<" ";
}
