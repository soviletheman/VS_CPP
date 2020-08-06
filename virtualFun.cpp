//Illustrate the use of Virtual functions
//When creating a derived object from a base pointer
    //Overide functino called by default is from the base class
    //Should we need to call the derived class fucntion we need to use virtual

#include <iostream>
#include <stdlib.h>

using namespace std;

class Base
{
    public:
        virtual void display()
        {
            cout << "Display base class"<<endl;
        }
        void display2()
        {
            cout << "Display base class"<<endl;
        }
    
};

class Derived: public Base
{
    public:
        void display()
        {
            cout << "Display derived class"<<endl;
        }
        void display2()
        {
            cout << "Display base class"<<endl;
        }
    
};

int main()
{
    //Create an object of type derived but from a pointer of the base class type
    Base *p = new Derived();
    Base *d = new Derived();
    //standard call to func will display base faunction even if it is a derived object
    d->display2();
    //Should call display from the base class but due to virtual will call the derived fn
    p->display();
    system("PAUSE");
    return 0;
}