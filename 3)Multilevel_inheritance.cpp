//Multilevel inheritance
#include<iostream>
#include<string>
using namespace std;

class Food 
{
    public:
    string cuisine="Indian";
    void type()
    {
        cout<<"South Asian"<<endl;
    }
};
class Dish: public Food 
{
    public:
    string dish="Papdi Chaat";
};
class Restaurant: public Dish 
{
    public:
    string name="Ganesh Bhel";
};

int main()
{
    Restaurant f3;
    f3.type();
    cout<<f3.cuisine<<": "<<f3.dish<<endl;
    cout<<"Restaurant: "<<f3.name;
}
/*
South Asian
Indian: Papdi Chaat
Restaurant: Ganesh Bhel
*/
