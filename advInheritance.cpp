//Program to illustrate the use of a Cubiod class which is inherited from the rectangel base class
    //Class is a specilisation of the rectangle class

#include <iostream>
#include <stdlib.h>
using namespace std;
//***********************BASE Class Definition**********************************//

class Rectangle
{
    private:
        int length;
        int width;
    public:
    //Non-Parameterised constructor - called everytime an object is creaated
        Rectangle();
    //Parameterised Constructor
        Rectangle(int L, int W);
    //Copy contructor creating a copy of another object
        Rectangle(Rectangle &R);
    //Mutators - set functions
        void setLength(int L);
        void setWidth(int W);
    //Accessors - get functions
        int getLength();
        int getWidth();
    //Facilitator Functions - performs some operations
        int area();
        int perimeter();
    //Enquiry functions - returns boolean check
        bool isSquare();
    //destructors
        ~Rectangle();
};

//***********************Inherited Class Definition**********************************//

class Cuboid: public Rectangle
{
    private:
        int height;
    public:
        //Constructor
        Cuboid(int L, int W, int H);
        //Mutators
        void setHeight(int H);
        //Accessor
        int getHeight();
        //Facilitator function - calc Volume
        int cubVolume();
        //Destructor
        ~Cuboid();


};

//***********************FUNCTION PROTOTYPES*********************************//


//***********************MAIN************************************************//

int main()
{
    static int select = 0;
    //Rectangle *r1 = new Rectangle;  //Non-parametrised object initialisation
    //Rectangle *dr1 = new Rectangle(2,5);  //Parametrised object initialisation
    //Rectangle *r1 = new Rectangle(*dr1);  //Created with copy consstructor
    Cuboid *r1 = new Cuboid(1,2,3);
    do
    {
        cout <<"Rectangle menu:"<<endl;
        cout <<"\t1. Set length"<<endl;
        cout <<"\t2. Set width"<<endl;
        cout <<"\t3. Get length"<<endl;
        cout <<"\t4. Get width"<<endl;
        cout <<"\t5. Calculate perimeter"<<endl;
        cout <<"\t6. Calculate area"<<endl;
        cout <<"\t7. Square check"<<endl;
        cout <<"\t8. Cuboid-> setHeight"<<endl;
        cout <<"\t9. Cuboid-> getHeight"<<endl;
        cout <<"\t10. Cuboid-> Volume"<<endl;
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
            case 7: //isSquare
            {
                cout << "Is this a square: ";
                if (r1->isSquare()==false)
                {
                    cout <<"False"<<endl;
                }
                else
                {
                    cout<<"True"<<endl;
                }
                system("PAUSE");
                system("CLS");
                break;
            }
            case 8: //set cuboid height
            {
                int H=0;
                cout << "Enter a Height: ";
                cin >> H;
                r1->setHeight(H);
                system("PAUSE");
                system("CLS");
                break;
            }
            case 9: //Get cuboid height
            {
                cout<< "The height is: "<<r1->getHeight()<<endl;
                system("PAUSE");
                system("CLS");
                break;
            }
            case 10: //Calc volume
            {
                cout << "The volume of the cuboid is: "<<r1->cubVolume()<<endl;
                system("PAUSE");
                system("CLS");
                break;
            }
            case 0: break;
            default: cout << "Invalid selection";
        }
    }while (select !=0);

    system("PAUSE");
    return 0;
}

//****************************************************************************//
//----------------------BASE Rectangel class----------------------------------//
//****************************************************************************//

//Non-Parameterised constructor - called everytime an object is creaated
Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}
//Parameterised Constructor
Rectangle::Rectangle(int L, int W)
{
    setLength(L);
    setWidth(W);
}
//Copy contructor creating a copy of another object
Rectangle::Rectangle(Rectangle &R)
{
    length = R.getLength();
    width = R.getWidth();
}
//Mutators - set functions
void Rectangle::setLength(int L)
{
    if (L>0)
        this->length = L;   //this is a pointer to the current object
    else
        this->length = 0;
}
void Rectangle::setWidth(int W)
{
    if (W>0)
        width = W;
    else
        width = 0;
}

//Accessors - get functions
int Rectangle::getLength()
{
        return length;
}
int Rectangle::getWidth()
{
        return width;
}
//Facilitator Functions - performs some operations
int Rectangle::area()
{
    return length*width;
}
int Rectangle::perimeter()
{
    return 2*(length*width);
}
//Enquiry functions - returns boolean check
bool Rectangle::isSquare()
{
    return length == width ? true:false;
}
//destructors
Rectangle::~Rectangle()
{
    cout << "Rectangle is destroyed"<<endl;
}

//************************************Inherited class function implementations **********************************//
Cuboid::Cuboid(int L, int W, int H)
{
    setLength(L);
    setWidth(W);
    setHeight(H);
}

void Cuboid::setHeight(int H)
{
    if (H>0)
        height = H;
    else
        height = 0;
}

int Cuboid::getHeight()
{
    return height;
}

int Cuboid::cubVolume()
{
    return this->getHeight()*this->getWidth()*this->getLength();
}
Cuboid::~Cuboid()
{
    cout <<"Cuboid destroyed"<<endl;
}