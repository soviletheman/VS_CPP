//Program to illustrate the concept of a deep copy
    //Especially when working with pointers the default copy construtor will just copy a pointer
    //This means it is pointing to the same data from original
    //To create a copy need to declare a new data and pointer
//Need to always be cognicent of the data that needs to be copied and not just addresses
    //Like with arrays
    //so with pointers

#include <iostream>
#include <stdlib.h>
using namespace std;

class test
{
    private:
        int x;
        int *ptr = &x;
    public:
        test(int X=0)
        {
            x = X;
        }
        test(test &T)
        {
            x = T.getx();
            ptr = &x;   //refer to the new data not same pointer in T
        }
        int getx()
        {
            return x;
        }
        int *pointx()
        {
            return ptr;
        }
};

int main()
{
    test t1(5);     //Default object created
    test t2(t1);    //Deep copy of object

    cout << "Original x\t: "<<t1.getx()<<endl;
    cout << "Original ptr\t: "<<t1.pointx()<<endl;
    cout << "Copy x\t: "<<t2.getx()<<endl;
    cout << "Copy ptr\t: "<<t2.pointx()<<endl;

    return 0;
}