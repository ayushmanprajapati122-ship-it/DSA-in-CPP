// #include <iostream>
// using namespace std;

// class Student
// { // user define data type
// public:
//     string name;
//     int rno;
//     float cgpa;
// };

// int main()

// {
//     Student x;
//     x.name = "Ayushman";
//     x.rno = 39;
//     x.cgpa = 8.6;
//     cout<<x.name<<" "<<x.cgpa<<" "<<x.rno<<" "<<endl;
//     Student y;
//     y.name="Rahul";
//     y.rno=50;
//     y.cgpa=8.9;

//     cout<<y.name<<" "<<y.cgpa<<" "<<y.rno<<" "<<endl;
// }

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rno;
    float cgpa;

    Student(string n, int r, float c)
    {

        rno = r;
        name = n;
        cgpa = c;
    }
    Student(){

    }
};

int main()
{
    Student z("Rahul",56,7.5);

    Student x;
    x.name = "Ayushmna prajapati";
    x.rno = 78;
    x.cgpa = 7.6;

    Student y;
    y.name = "Adarsh prajapti";
    y.rno = 90;
    y.cgpa = 8.4;

    cout << x.name << " " << x.cgpa << " " << x.rno << " " << endl;
    cout << y.name << " " << y.cgpa << " " << y.rno << " " << endl;
    cout << z.name << " " << z.cgpa << " " << z.rno << " " << endl;

}