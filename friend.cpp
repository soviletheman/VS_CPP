//Illustrates the use of friend
    //Can be applied for a class or a function in the same the way

#include <iostream>
#include <stdlib.h>

using namespace std;

class Your;     //Must prototype your so compiler knows what it is before it is reached in the friend functino line
class My
{
    private:
        int a = 0;
    protected:
        int b = 0;
    public:
        int c = 0;
        friend Your;          //Functions or classes declared as friends are give access to all data members
};

class Your
{
    public:
        My y;
        void fun()
            {
                y.a = 10;   //No access unless the class is declared as a friend
                y.b = 11;   //No access unless the class is declared as a friend
                y.c = 12;   //Publically available
            }
        void display()
        {
            cout << y.a <<endl;
            cout << y.b <<endl;
            cout << y.c <<endl<<endl;
        }
};

int main()
{
    Your a;
    a.display();
    a.fun();
    a.display();
    system("PAUSE");
    return 0;
}