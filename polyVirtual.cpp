//Illustrate polymorphism which also shows the relevance of the virtual function

//A Class can have 2 types of functions
    //Concrete - implementaion of the functions are in the class itself
    //Virtual - Implementation of a function is implemented in another class
//*Note that a virtual function does not need a body and can siply be equal to 0 - AKA PURE VIRTUAL FUNCTION

//From the above concept we can have 3 types of classes
    //1. All functions are concrete - main purpoe is reusability
    //2. All functions are virtual - purpose is only to achieve Polymorphism (Abstract class - more specifically referred to as an Interface)
    //3. Hybrid of virtual and concrete fns - dual purpose (Abstract Class)

#include <iostream>
#include <stdlib.h>

using namespace std;

//Generalisation - does not exist in real world
class Car
{
    public:
        //made virtual to force implementation of derived class, no body actually required
        //Can not make an object of the general class just used to achieve polymorphism
        //Can only create a pointer of the base class
        //virtual void start(){cout<<"Start Car"<<endl;}        //Virtual function
        virtual void start()=0;                                 //Pure Virtual function - No body
};
//Specialised classes
class Ranger: public Car
{
    public:
        //overiden class must be implemented in the derived class
        void start(){cout<<"Start Ranger"<<endl;}
};
class Hilux: public Car
{
    public:
        void start(){cout<<"Start Hilux"<<endl;}
};

int main()
{
    Car *p=new Hilux();
    p->start();             //Will call base class if fn in base class is not declared as a virtual function
    p = new Ranger();       //pointer reassigned to a new object
    p->start();             //Same line calls a diffrent function in the code ->POLYMORPHISM

    system("PAUSE");
    return 0;
}