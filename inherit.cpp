//Illlustration of inheritance: Class derived from another class
    //Builds up a class that is a bit more specialised

#include <iostream>
#
using namespace std;

class Base
{
    public:
        int x;
        void show();
};

//Class is derived from the base class
//Will have all attributes of the base class aswell as additions from the derived class
class Derived: public Base
{
    public:
        int y;
        void display();
};

int main()
{   
    //Create an object of the derived type
    Derived b;
    b.show();
    b.display();
    return 0;

}

void Base::show()
{
    cout << "x--> " << x <<endl;
    return;
}

void Derived::display()
{
    cout << "x--> "<<x<<endl;   //Can make use of base class methods and data
    cout << "y--> "<<y<<endl;
    return;
}