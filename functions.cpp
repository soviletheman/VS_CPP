#include <iostream>
#include <stdlib.h>
using namespace std;

//Function declerations
//Gets values from user
//Pass by reference
void getValues(int &a, int &b);
void getValues(float &a, float &b);
//adds 2 numbers together
template <class T>
T add (T a, T b);//), T c=0);        //*Can not use default arguments with a template class
//overlaoded getvalues function with 3 parameters
void getValues(int &a, int &b, int &c);
//overloaded add function with 3 paramters
int add (int a, int b, int c);        //Made redundant throu use of default arguments(*Not allowed with a template class)
//Text of parameter methods review portion - coding example
void parMethods();
//swap values code example - pass by value
void swapVal(int a, int b);
//swap values code example - pass by address
void swapAddr(int *a, int *b);
//swap values code example - pass by reference
void swapRefr(int &a, int &b);
//pointer function - sample code to show return of an address through a function
int *ptrFun(int size);
//Recursive function - sample code
void recuFn(int control);

//------------------------------------------------------------------------------------------------------------------//
//----------------------------------------Main Function Body--------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

int main()
{
    //Function call illustration with overaloading
    int x = 0, y=0, z=0, total =0;
    float fx=0.0, fy=0.0, fTotal=0.0;
    getValues(x,y);
    total = add(x,y);
    cout <<"the sum of x + y = "<<total<<endl;

    //same call to add but with 3 values
    getValues(x, y, z);
    total = add(x, y, z);
    cout <<"The sum of x + y + z = "<<total<<endl;

    //uning the template class to overlaod functions with the same number of attributes
    getValues(fx,fy);
    fTotal = add(fx,fy);
    cout <<"The sum of x + y = "<<fTotal<<endl;

    system ("PAUSE");
    system ("CLS");

    parMethods();
    
    system ("PAUSE");
    system ("CLS");

    int *ptr;
    ptr = ptrFun(10);
    cout <<"Show values in array initialised and created in heap by function returning address"<<endl;
    for (int i=0; i<10; i++)
    {
        cout<< ptr[i]<<", ";
    }

    system ("PAUSE");
    system ("CLS");

    cout <<"Illustration of a recursive function call: "<<endl;
    cout<<"\t=A vuntion which calls itself"<<endl<<endl;

    cout<<"This function calls itself decreasing an int = 5"<<endl;
    int recur=5;
    recuFn(recur);

    system ("PAUSE");
    system ("CLS");
    return 0;
}

//---------------------------------------------------------------------------------------------------------------//
//----------------------------------------Function Bodies--------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------//

void getValues(int &a, int &b)
{
    cout << "Please enter 2 int values to be added: ";
    cin >> a >> b;
    return;
}

void getValues(float &a, float &b)
{
    cout << "Please enter 2 float vlues to be added: ";
    cin >> a >> b;
    return;
}

void getValues(int &a, int &b, int &c)
{
    cout << "Please enter 3 int values to be added: ";
    cin >> a >> b >> c;
    return;
}

//Template class T is a variable type of data type that can be used interchangably for different types
//When creating overloaded functions with the same number of variables best to use a template class
template <class T>
T add (T a, T b)//, T c=0) //Using default arguments allows for overlaoding with multiple number of parameters
{
    return a+b;//+c;
}

int add (int a, int b, int c)
{
    cout << a <<", "<< b <<", " << c;
    return a+b+c;
}

void parMethods()
{
    int x=10, y=20;
    cout << "Next we illustrate the 3 methods used to pass variables fo functions:"<<endl;
    cout << "\t1. Pass by value"<<endl;
    cout << "\t2. Pass by address"<<endl;
    cout << "\t3. Pass by reference"<<endl<<endl;

    cout <<"This is illustrated by a program which swaps 2 values x and y"<<endl;
    cout <<"x --> 10"<<endl;
    cout <<"y --> 20"<<endl;

    cout <<"Swap values of x and y --> Call by VALUES"<<endl<<endl;
    swapVal(x,y);   //Pass actuals
    cout <<"x --> "<< x <<endl;
    cout <<"y --> "<< y <<endl<<endl;
    cout <<"*Values are only swapped within the function and not in the main code"<<endl;

    cout <<"Swap values of x and y --> Call by ADDRESS"<<endl;
    swapAddr(&x,&y); //Pass actuals addresses
    cout <<"x --> "<< x <<endl;
    cout <<"y --> "<< y <<endl;
    cout <<"Values at address of actuals changed by the function call"<<endl<<endl;

    cout <<"Swap values of x and y --> Call by REFERENCE"<<endl;
    swapRefr(x,y); //Pass actuals
    cout <<"x --> "<< x <<endl;
    cout <<"y --> "<< y <<endl;
    cout <<"Values at actuals changed by the function call which used nicknames"<<endl<<endl;
}

//Pass by value implementation
void swapVal(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

//Pass by address implementation
void swapAddr(int *a, int *b)   //Using pointers means these paramters accepts addresses
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

//Pass by reference implementation
void swapRefr(int &a, int &b)   //Using references as nick names of original actuals
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

//Function to illustrate passing address back from a function
//Usefule in intialising and creating an array
int *ptrFun(int size)
{
    int *p = new int[size];
    for (int i=0; i<size; i++)
    {
        p[i] = i+1;
    }
    return p;   //returns the pointer to this array in the heap
}

//Recurive function
void recuFn(int control)
{
    if(control>0)   //must have a terminating condition
    {
        cout << "Control --> "<<control<<endl;
        recuFn(control - 1);    //must call the fn again
    }
}