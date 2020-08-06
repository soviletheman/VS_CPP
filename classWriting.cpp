//Progrm to demonstrate the syntax of a class
#include <iostream>
using namespace std;

//Class Definition
class Rectangle
{
    public:
        //Data variables
        int length;
        int width;
        
        //Functions
        int area()
        {
            return length*width;
        }
        int perimeter()
        {
            return 2*(length*width);
        }
};  //Class needs a closing semi colon

int main()
{
    //Regular creation of an object
    Rectangle r1, r2, r3;
    //Creation of a pointer to an object
    Rectangle *r;   //just defining a pointer of rectangle type
    r = &r3;        //Needs to be assigned to an object

    r1.length = 5;
    r1.width = 4;

    cout <<"Area of rectangel r1 = "<< r1.area() <<endl;

    r2.length = 6;
    r2.width = 14;
    cout <<"Area of rectangel r2 = "<< r2.area() <<endl;

    //Need to use the "this" arrow to access members of a pointer object
    r->length=15;
    r->width=15;
    cout <<"Area of rectangle r3 (Pointer) = "<< r->area() <<endl;

    //Creating a pointer to an object created in the heap - method 1
    Rectangle *rec1;        //creates a pointer of type [class]
    rec1 = new Rectangle;   //assign address in heap of an object
    rec1->length = 35;
    rec1->width = 56;
    cout <<"Area of rectangle rec1 (heap object) = "<< rec1->area() <<endl;

    //can be done in a single line
    Rectangle *rec2 = new Rectangle;
    rec2->length = 10;
    rec2->width =10;
    cout <<"Area of rectangle rec2 (heap object) = "<< rec2->area() <<endl;

    return 0;
}