#include <iostream>
#include <stdlib.h>

using namespace std;

class Shape
{
    public:
        virtual int perim() = 0;
        virtual int area() = 0;
};

class Rectangle: public Shape
{
    private:
        int length;
        int width;
    public:
        Rectangle(int L, int W)
        {
            length = L;
            width = W;
        }
        int perim()
        {
            return 2*this->length*this->width;
        }
        int area()
        {
            return this->length*this->width;
        }
};

class Circle: public Shape
{
    private:
        int radius;
    public:
        Circle(int R)
        {
            radius = R;
        }
        int perim()
        {
            return 2*(22.0/7)*this->radius;
        }
        int area()
        {
            return (22/7)*this->radius*this->radius;
        }
};


int main()
{
    Shape *S = new Rectangle(10,5);
    cout << "Perimeter of Rectangle is: "<< S->perim() <<endl;
    cout << "Area of Rectangle is: "<< S->area() <<endl;
    S = new Circle(10);
    cout << "Perimeter of Circle is: "<< S->perim() <<endl;
    cout << "Area of Circle is: "<< S->area() <<endl;
    system("PAUSE");
    return 0;
}