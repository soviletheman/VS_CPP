//Static data members in a class are created once for all objects and shared accross them all
    //They can be called by class and scope resolution op or through objects
    //It is important that they are declared in class AND AS GLOBAL VARIABLE
//Static member functions only have access to static data members
    ///Can also be called from class name or object


#include <iostream>
#include <stdlib.h>

using namespace std;

class Test
{
    private:
        int a;
    public:
        //Static variable are consistenty applied to all objects of the class
        static int count;           //Creating a static variable
        //Constructor
        Test()
        {
            a = 10;
            count++;
        }
        //These are accessible even without creating any objects of the class
        //Useful as count and/or key, and providning static information about a class even with no objects of class
        static int getCount()      //Static member functions only have access to static member functions
        {
            return count;
        }
};

//static member variables have to be created in Global space
//Must only be accessble in the Test class
int Test::count=0;           

int main()
{
    cout << Test::getCount()<<endl; //Can call a static member function berfore any object is created
    Test t1;
    cout << Test::count<<endl;
    cout << t1.count<<endl;
    cout << t1.getCount()<<endl;

    Test t2;
    cout << Test::count<<endl;
    cout << t2.count<<endl;
    cout << t2.getCount()<<endl;   

    system("PAUSE");
    return 0;
}