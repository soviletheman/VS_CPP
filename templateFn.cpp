//Shows thow to use "Template" when working with functions
    //Essentialy substituting the data type with key word template
    //Allows different data types for the same function call
    //changes as per what ever data type is passed

#include<iostream>
#include<stdlib.h>

using namespace std;

template<class T>
T add(T x, T y);

int main()
{
    //same function called to add different data types
    cout <<"Add 2 integers: 1 + 5 = "<<add(1,5)<<endl;          
    cout <<"Add 2 float: 1.5 + 5.25 = "<<add(1.5,5.25)<<endl;
    return 0;
}

template<class T>
T add(T x, T y)
{
    return x+y;
}