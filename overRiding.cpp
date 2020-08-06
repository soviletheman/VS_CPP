//Program demonstrates the concept of Overiding and aOverlaoding
    //With the use of classes
    //How to refer to the same funciton name in inherited classes

#include<iostream>
#include <stdlib.h>

using namespace std;

class Base
{
    public:
        void display()
        {
            cout <<"Display Base Class"<<endl;
        }
};

class Derived: public Base
{
    public:
        int x=0;
        void display()
        {
            cout << "Display Derived Class"<<endl;
        }
        void display(int X)
        {
            cout << "Parameterised Dislpay: "<<X<<endl;
        }
};

int main()
{
    Base b;
    Derived d;
    //Straight base class call
    b.display();            
    //display is named in both classes with the exact same siganture --> Overiding
    d.display();
    //Parameterised function call - Overlaoding
    d.display(10);
    //How to force the base class call for a class derived with overiding
    d.Base::display();

    system("PAUSE");
    return 0;
}