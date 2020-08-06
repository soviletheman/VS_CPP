//Rectangle class program demonstrating the constuctors
//There are a few key types of constructors
    //Default constructor: always called to create an object
    //Non-Parameterised
    //Parameterised
    //Copy constructor
#include <iostream>
#include <stdlib.h>
using namespace std;

//***********************Class Definition**********************************//

class Rectangle
{
    private:
        int length;
        int width;
    public:
    //Non-Parameterised constructor - called everytime an object is creaated
        Rectangle()
        {
            length = 0;
            width = 0;
        }
    //Parameterised Constructor
        Rectangle(int L, int W)
        {
            setLength(L);
            setWidth(W);
        }
    //Copy contructor creating a copy of another object
        Rectangle(Rectangle &R)
        {
            length = R.getLength();
            width = R.getWidth();
        }
        //Mutators - set functions
        void setLength(int L)
        {
            if (L>0)
                length = L;
            else
                length = 0;
        }
        void setWidth(int W)
        {
            if (W>0)
                width = W;
            else
                width = 0;
        }

        //Accessors - get functions
        int getLength()
        {
                return length;
        }
        int getWidth()
        {
                return width;
        }
        //Facilitator Functions - performs some operations
        int area()
        {
            return length*width;
        }
        int perimeter()
        {
            return 2*(length*width);
        }
        //Enquiry functions - returns boolean check
        //destructors
};

//***********************FUNCTION PROTOTYPES*********************************//


//***********************MAIN************************************************//

int main()
{
    static int select = 0;
    //Rectangle *r1 = new Rectangle;  //Non-parametrised object initialisation
    Rectangle *dr1 = new Rectangle(2,5);  //Parametrised object initialisation
    Rectangle *r1 = new Rectangle(*dr1);  //Created with copy consstructor
    do
    {
        cout <<"Rectangle menu:"<<endl;
        cout <<"\t1. Set length"<<endl;
        cout <<"\t2. Set width"<<endl;
        cout <<"\t3. Get length"<<endl;
        cout <<"\t4. Get width"<<endl;
        cout <<"\t5. Calculate perimeter"<<endl;
        cout <<"\t6. Calculate area"<<endl;
        cout <<"\t0. Exit"<<endl;
        cout <<"Selection -->";
        cin >> select;
        switch (select)
        {
            case 1: //set Length
            {
                int L=0;
                cout << "Enter a length: ";
                cin >> L;
                r1->setLength(L);
                system("CLS");
                break;
            }
            case 2: //set Width
            {
                int W=0;
                cout << "Enter a Width: ";
                cin >> W;
                r1->setWidth(W);
                system("CLS");
                break;
            }
            case 3: //Get length
            {
                cout<< "The length is: "<<r1->getLength()<<endl;
                system("PAUSE");
                system("CLS");
                break;
            }
            case 4: //Get width
            {
                cout<< "The width is: "<<r1->getWidth()<<endl;
                system("PAUSE");
                system("CLS");
                break;
            }
            case 5: //Perimeter
            {
                cout<< "The perimeter is: "<<r1->perimeter()<<endl;
                system("PAUSE");
                system("CLS");
                break;
            }
            case 6: //Area
            {
                cout<< "The area is: "<<r1->area()<<endl;
                system("PAUSE");
                system("CLS");
                break;
            }
            case 0: break;
            default: cout << "Invalid selection";
        }
    }while (select !=0);

    system("PAUSE");
    system("CLS");
    return 0;
}

//***********************Function Definitions**********************************//
