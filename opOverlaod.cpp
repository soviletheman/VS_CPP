//Overlaoding the definition of standard operators
//Used to specifcy how operator will treat our data objects defined in a class
//An operator call like + is essential object.operator+(paramenters)

//Another method is using the friend function
    //simply a function that does not need the scope resolution operator for the implementation

#include <iostream>
#include <stdlib.h>
using namespace std;

class Complex   //Class which stores complex number and its methods
{
    private:
        int real;
        int imag;
    public:
        //Constructor
        Complex(int R=0, int I=0);
        //SetMethods
        void setReal(int R);
        void setImag(int I);
        //Get methods
        int getReal();
        int getImag();
        //Overload the add operator
        Complex operator+(Complex X);
        //Destructor
        ~Complex();
        //Friend function prototype
        friend Complex operator-(Complex Y1, Complex Y2);
        friend ostream &operator<<(ostream &O, Complex &C);
};

int main()
{
    Complex C1(5,4), C2(4,5), Total;
    
    //cout <<"= ("<< Total.getReal() <<" + "<< Total.getImag() <<"i)"<< endl<<endl;

    Total = C1 + C2;
    
    //cout <<"("<< C1.getReal() <<" + "<< C1.getImag() <<"i) + ("<< C2.getReal() <<" + "<< C2.getImag() <<"i)"<< endl;
    //cout <<"= ("<< Total.getReal() <<" + "<< Total.getImag() <<"i)"<< endl;

    //So much simpler with insertion operator overlaoded compared to the above
    cout << C1 << "+" << C2 << " = " << Total<<endl;

    system("PAUSE");
    system("CLS");

    Total = C1 - C2;
    
    //cout <<"("<< C1.getReal() <<" + "<< C1.getImag() <<"i) - ("<< C2.getReal() <<" + "<< C2.getImag() <<"i)"<< endl;
    //cout <<"= ("<< Total.getReal() <<" + "<< Total.getImag() <<"i)"<< endl;

    //So much simpler with insertion operator overlaoded compared to the above
    cout << C1 << "-" << C2 << " = " << Total<<endl;
    //Equivalent of function call operator<<(cout,C);
    
    system("PAUSE");
    system("CLS");
    return 0;
}

//---------------------------------------Class Function implements--------------------------------//
//Constructor
Complex::Complex(int R, int I)
{
    setReal(R);
    setImag(I);
}

//Overload the add operator
Complex Complex::operator+(Complex X)
{
    Complex Temp;
    Temp.real = this->real + X.real;
    Temp.imag = this->imag + X.imag;
    return Temp; 
}

Complex::~Complex()
{
    cout << "Imaginary object deleted"<<endl;
}

//Get methods
int Complex::getReal()
{
    return this->real;
}
int Complex::getImag()
{
    return this->imag;
}

//SetMethods
void Complex::setReal(int R)
{
    this->real = R;
}
void Complex::setImag(int I)
{
    this->imag = I;
}
//Friend function does not need scope reolution operator
Complex operator-(Complex Y1, Complex Y2)
{
    Complex T;
    T.real = Y1.real - Y2.real;
    T.imag = Y1.imag - Y2.imag;
    return T;
}
//overloaded insertion operator
//As a friendfunction as the inserion operator has 2 arguments (ostream and object)
//need the stream as a return type
ostream &operator<<(ostream &O, Complex &C)
{
    O << "("<< C.getReal() <<" + "<< C.getImag() <<"i)";
    return O;
}