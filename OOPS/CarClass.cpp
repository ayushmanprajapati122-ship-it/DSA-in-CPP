#include<iostream>
using namespace std;

 class Car{

    public:
    string Name;
    string color;
    int power;
    int seats;
    int price;
    float avrage;
    bool AC;
 };

 int main(){
    Car c1;
    c1.Name="Scrpio";
    c1.color="Black";
    c1.power=200;
    c1.seats=6;
    c1.price=25;
    c1.avrage=9.5;
    c1.AC=true;

    cout<<c1.Name<<" "<<endl;
    cout<<c1.color<<" "<<endl;
    cout<<c1.price<<" "<<endl;
    cout<<c1.seats<<" "<<endl;
 }