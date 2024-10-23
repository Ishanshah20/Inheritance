
//Multiple inheritance
#include<iostream>
#include<string>
using namespace std;

class Vehicle 
{
    public:
    string company="Suzuki";
    void type()
    {
        cout<<"Swift"<<endl;
    }
};

class Specs 
{
    public:
    string mileage="20 kmpl";
    void colour()
    {
        cout<<"Red and White"<<endl;
    }
};
class Car: public Vehicle, public Specs 
{
    public:
    string seater="4 seater";
};

int main()
{
    Car f1;
    f1.colour();
    cout<<f1.company<<" ";
    f1.type();
    cout<<"("<<f1.seater<<")"<<endl<<"MILEAGE: "<<f1.mileage<<endl;
}
/*
Red and White 
Suzuki Swift
(4 seater)
MILEAGE: 20 kmpl
*/
