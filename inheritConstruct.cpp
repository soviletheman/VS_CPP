#include <iostream>
using namespace std;

class Base
{
    private:
        int x;
    public:
        Base()
            {
                cout << "Default Base constructor"<<endl;
            }
        Base(int X)
            {
                x=X;
                cout << "Parameterised Base constructor, x --> "<<x<<endl;
            }
};

class Derived: public Base
{
    private:
        int y;
    public:
        Derived()
        {
            cout << "Derived default constructor"<<endl;
        }
        Derived(int Y)
        {
            y=Y;
            cout << "Parameterised derived constructor, y-->"<<y<<endl;
        }
        Derived(int X, int Y):Base(X)   //Syntax of Constructor used to call parameterised contructor for derived and base class
        {
            y=Y;
            cout << "Parameterised derived constructor, y-->"<<y<<endl;
        }
};

int main()
{
    cout <<"\nBase class constructors:"<<endl;
    cout <<"**************************"<<endl;
    Base b;
    Base b1(5);
    cout <<"\n\nDerived class constructors:"<<endl;
    cout <<"**************************"<<endl;
    Derived d;              //Will run base default and then derived default
    Derived d1(10);         //Will run base default and then derived parameterised
    Derived d2(50, 100);    //Will run parameterisd constructors for base and derived class

    return 0;
}