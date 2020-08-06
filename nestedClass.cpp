//A class can be nested within a class
    //Class only applicable within the scope of the class
    //Used for node data in linked lists

#include <iostream>
#include <stdlib.h>

using namespace std;

class Outer
{
    private:
        //private data variable of outer class
        int a;                      
        //Private nested class of outer class
        class privateInner
        {
            private:
                //Private data variable of inner class
                int b;
            public:
                //Constructor
                privateInner()
                {
                    b = 0;
                }
                //accessor
                void showB()
                {
                    cout << "Nested B: "<< b << endl;
                }
        };
    public:
        //Constructor
        Outer()
        {
            a = 10;
        }
        //function using the object of inner class
        void showPI()
        {
            //create instance of private class must be done after class
            privateInner pi;
            pi.showB();
        }
};

int main()
{
    Outer o1;
    //No access to innerClass which is created as a private member class of outer
    o1.showPI();
    system("PAUSE");
    return 0;
}