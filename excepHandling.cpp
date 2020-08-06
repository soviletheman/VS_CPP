//EXCEPTION HANDLING
//Providing error message to a user guiding in resolution

//3 Main types of exceptions/errors
    //1. Syntax error: error in the coding format
        //COMPILER - assists with removing these errors
    //2. Logical error: Provides unexpected results
        //DEBUGGER - Something wrong in the logic
    //3. Runtime error (Programmer (1,2) or user issue)
        //->As a result of bad input
        //->Connection to unavailable resource
        //->Known as exceptions (Perfect program)

//Try-Catch syntax
//*****************
//Try
//{}
//Catch{int}    //Can have multiple catch blocks for different data types
//Catch{float}
//Catch{...}    //Can catch all non-specified datat types

//*Note: Must follow heirarchy as per above to ensure all is last
//*When throwing classes that are derived must start with the child class in the 1st catch block


#include <iostream>
#include <stdlib.h>

using namespace std;

float div();

int main()
{
    int x=0, y=0;
    //Start of the try/catch block of error handling
    cout <<"x/y = "<<endl;
    cout <<"x--> ";
    cin >> x;
    cout <<"y--> ";
    cin >> y;
    try
    {
        if (y==0)
            throw 101;      //Need to throw some error code that can be received by catch
        cout <<"x/y = "<<(float)x/y<<endl;
    }
    catch(int e)    //accepts some value from the throw
    {
        cout << e <<": Error - Division by 0"<<endl;
    }
    system ("PAUSE");
    system ("CLS");

    //All of the above can be achieved through an if-else statement
    //We use a try-catch because if the content was applied in a functions how could we check for an error
    //Catch the error in the function and throw back to the try-catch block
    try
    {

        cout <<"x/y = "<<div()<<endl;
    }
    catch(int e)    //accepts some value from the throw
    {
        cout << e <<": Error - Division by 0"<<endl;
    }

}

float div()
{
    int x=0, y=0;
    cout <<"x/y = "<<endl;
    cout <<"x--> ";
    cin >> x;
    cout <<"y--> ";
    cin >> y;
    if (y == 0 )
        throw 102;
    return float(x)/y;
}