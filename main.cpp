#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
//#include <array>
//#include <vector>

using namespace std;

//Funtion prototypes
int max (int x, int y);    //returns max of 2 number
int min (int x, int y);    //returns min of 2 numbers
//Function call to illustrate nature of static variables
int staticOut(int a);

int main()
{
    typedef int control;
    control select =0, basicSelect=0, loopSelect=0, pntSelect=0;

    //Main menu case implementation
    do
    {
        cout << "CPP Illustration, select option:" << endl;
        cout << "1. Basic Operations"<<endl;
        cout << "2. Arrays"<<endl;
        cout << "3. Pointers"<<endl;
        cout << "4. Reference variable"<<endl;
        cout << "5. Static variables"<<endl;
        cout << "0. Exit"<<endl;
        cin >> select;
        system("CLS");

        //Root case menu
        switch (select)
        {
            case 1: //Basic Operations menu
            {
                cout << "1. Overflow"<<endl;
                cout << "2. Enum and TypeDef"<<endl;
                cout << "3. Loops"<<endl;
                cout << "0. Back"<<endl;
                cin >> basicSelect;
                system("CLS");
                //Basic operatinos case implementation
                switch (basicSelect)
                {
                    case 1: //Overflow
                    {
                        char x;
                        int a=INT_MAX;          //predefined to show max int

                    //CHARS
                        cout << "This program illustrates overflow in CPP:" << endl;
                        cout <<"The integer range of a Char is -127 to 128"<<endl;
                        x = 128;
                        cout <<"x = 128;"<<endl;
                        ++x;
                        cout <<"++x --> "<<(int)x<<endl<<endl;

                    //INT
                        cout <<"The integer range of an INT, a is "<< a<<endl;
                        ++a;
                        cout <<"++a --> "<<a<<endl;
                        system ("PAUSE");
                        system("CLS");
                        break;
                    }
                    case 2: //Enum and Typedef
                    {
                        cout << "Enum and TypeDefe are used to create custom made data types (Months, dept, etc)" << endl;
                        cout << "Below is an example for creating data type fors days of the week:"<<endl;
                        //Define set of values which can be used in the user defined set
                        //Evenethough integers are assigned to these tags it can not be used with arithmetic operators
                        enum day{Mon,Tue,Wed,Thu,Fri,Sat,Sun};
                        cout <<"enum day{Mon,Tue,Wed,Thu,Fri,Sat,Sun};"<<endl<<endl;
                        cout <<"By default these are represented with integers or can be user defined"<<endl;

                        day a = Mon;
                        cout << "day a = Mon;"<<endl;
                        cout <<"a=Mon \t--> "<<a<<endl<<endl;

                        cout << "TypeDef is a way of renaming the declaration types so they read better"<<endl;
                        typedef int number;
                        number x = 0;
                        cout<< "typedef int number;"<<endl;
                        cout<< "number x = 0;"<<endl;
                        cout << "x\t:"<<x<<endl;
                        system ("PAUSE");
                        system("CLS");
                        break;
                    }
                    case 3:
                    {
                        const int n=10;
                        cout << "There are 4 types of loops:"<<endl;
                        cout <<"1. While"<<endl;
                        cout <<"2. Do_While"<<endl;
                        cout <<"3. For"<<endl;
                        cout <<"4. For_Each"<<endl;
                        cout <<"0. back"<<endl;

                        cin >> loopSelect;
                        system("CLS");

                        //Loop selection menu
                        switch(loopSelect)
                        {
                            case 1: //while loop
                            {
                                    int chk=0;
                                    cout<<"While loop --> while(condition){do this}"<<endl;
                                    //count up to 10 using a while loop
                                    cout<<"Counting up to 10 using a while loop:"<<endl;
                                    while (chk<n)
                                    {
                                        cout << chk+1 <<", ";
                                        chk++;
                                    }
                                    cout <<"\n";
                                    system ("PAUSE");
                                    system("CLS");
                                    break;
                            }
                            case 2: // do_while loop
                            {
                                    int chk=0;
                                    cout<<"DoWhile loop --> do(this}while(condition);"<<endl;
                                    //count up to 10 using a while loop
                                    cout<<"Counting up to 10 using a DoWhile loop:"<<endl;
                                    do
                                    {
                                        cout << chk+1 <<", ";
                                        chk++;
                                    }while (chk<n);
                                    cout <<"\n";
                                    system ("PAUSE");
                                    system("CLS");
                                    break;
                            }
                            case 3: //for loop
                            {
                                    cout<<"For loop --> for(initialisation;condition;updation){this}"<<endl;
                                    //count up to 10 using a while loop
                                    cout<<"Counting up to 10 using a for loop:"<<endl;
                                    for (int chk=0; chk<n; chk++)
                                    {
                                        cout << chk+1 <<", ";
                                    }
                                    cout <<"\n";
                                    system ("PAUSE");
                                    system("CLS");
                                    break;
                            }
                            case 4: //for each
                            {
                                int arr[5] = {1,2,3,4,5};
                                cout << "For Each Loop: for(type x:arrName){}"<<endl;
                                cout << "Cycles through array values assigning them to a variable"<<endl;
                                cout << "\tfor(int x:array){}"<<endl;
                                cout<<"\nDouble each item in array A[5] = {1,2,3,4,5}"<<endl;
//                                for (int x:arr)
//                                    cout << x*2;
                                cout <<endl;
                                system ("PAUSE");
                                system("CLS");
                                break;
                            }
                            case 0: break;
                            default: cout<<"Invalid selection"<<endl;

                        }
                    }
                    case 0: break;
                    default: cout<<"Invalid selection";
                }
                break;
            }
            case 2: //Arrays
            {
                int arrSelect=0;

                cout <<"Array selections menu:"<<endl;
                cout <<"1. 1 Dimensional Arrays"<<endl;
                cout <<"2. 2 Dimensional Arrays"<<endl;
                cout <<"0. Exit"<<endl;
                cin >> arrSelect;
                system ("CLS");
                switch (arrSelect)
                {
                    case 1: //1D Array
                    {
                        int Arr[5] = {1,2,3,4,5};
                        int arr2[5] = {5,2,3,14,-1};
                        int sum=0, max=0, pos=-1, chk=0;
                        cout << "Array Illustration: type arrName[n] = {ini0, ini1, ...,iniN}"<<endl;
                        cout<< "When initialising an array do not need to specify all values, unitialised values by default will be 0"<<endl;
                        cout <<"\tA[5]={0};"<<endl;
                        cout <<"You can leave out the size and it will be assigned to number of elements in intialisatoin list"<<endl;
                        cout<<"\tArr[]={1,2,3,4,5}"<<endl;

                        cout<<"taking sum of the array element above"<<endl;
                        for (int i=0; i<5; i++)
                        {
                            sum = sum + Arr[i];
                        }
                        cout <<"The sum of the array elements is: " <<sum<<endl<<endl;

                        cout<<"Finding the max value in int Arr2[] = {5,2,3,14,-1};"<<endl;
                        for (int i=0; i<5; i++)
                        {
                            if (max<arr2[i])
                                max = arr2[i];
                        }
                        cout << "The maximum value in the array is: "<<max<<endl<<endl;
                        cout <<"Searching an arr2 for: ";
                        cin >> chk;
                        for (int i=0; i<5; i++)
                        {
                            cout <<i<<"->"<<arr2[i]<<", ";
                            if (chk==arr2[i])               //Linear Search
                            {
                                pos = i;
                            }
                        }
                        if (pos>=0)
                            cout << "\nThe position of chk in arr2 is: "<<pos<<endl<<endl;
                        else
                            cout<<"Value not in arr2"<<endl<<endl;

                        system ("PAUSE");
                        system("CLS");
                        break;
                    }

                    case 2: //2D Arrays
                    {
                        char arr2D[10][10]={{'a','b','c','d','e','f','g','h','i','j'},{'a','b','c','d','e','f','g','h','i','j'},{'a','b','c','d','e','f','g','h','i','j'},{'a','b','c','d','e','f','g','h','i','j'},
                        {'a','b','c','d','e','f','g','h','i','j'},{'a','b','c','d','e','f','g','h','i','j'},{'a','b','c','d','e','f','g','h','i','j'},{'a','b','c','d','e','f','g','h','i','j'},
                        {'a','b','c','d','e','f','g','h','i','j'},{'a','b','c','d','e','f','g','h','i','j'}};
                        cout<< "Initialising the array"<<endl<<endl;;
                        for(int row=0; row<10; row++)
                        {
                            for(int col=0; col<10; col++)
                            {
                                cout <<" " << arr2D[row][col]<< " ";
                            }
                            cout<<endl;
                        }

                        cout<<"2D Arrays: Drawing patterns"<<endl;

                        for(int row=0; row<10; row++)
                        {
                            for(int col=0; col<row; col++)
                            {
                                cout<<" * ";
                            }
                            cout<<endl;
                        }

                        system ("PAUSE");
                        system("CLS");
                        break;
                    }
                    case 0: break;
                    default: cout<<"/nInvalid selection";
                }
            }
            break;
            case 3:
            {
                cout <<"Pointer selection menu:"<<endl;
                cout<<"1. Basic pointer theory"<<endl;
                cout<<"2. Why use pointers"<<endl;
                cout<<"3. Sample code"<<endl;
                cout<<"4. Pointer to a function"<<endl;
                cout<<"5. Common pointer errors"<<endl;
                cout<<"Selection --> ";
                cin >> pntSelect;

                switch (pntSelect)
                {
                    case 1: //Basic pointer theory
                    {
                        cout << "Pointers Illustration"<<endl;
                        cout << "Pointers have 2 parts a data and the address of that data"<<endl;
                        cout << "\tint *p; \t//Ilustrated by use of the * in the decleration" <<endl;
                        cout << "\tp=&x; \t\t//address of operator to reference the address of a variable" <<endl;
                        cout << "\tcout << 'Address of the actual pointer P' << &p; //address of the pointer holding the address pointed too" <<endl;
                        system ("PAUSE");
                        system("CLS");
                        break;
                    }
                    case 2: //Why use pointers
                    {
                        int *p; //Ilustrated by use of the * in the decleration
                        cout << "Why use pointers?"<<endl;
                        cout << "Pointers give a program access to Heap memory!"<<endl;
                        int arr1[5] = {1,2,3,4,5}; //Creates an array in the stack
                        cout<<"\tint arr1[5] = {1,2,3,4,5}; //Creates an array in the stack;"<<endl;
                        cout <<"int *p; //Pointer p also created in the stack"<<endl;
                        p = new int[5]; //Pointer now is made to point to an array of size 5 created in the heap
                        cout <<"p = new int[5]; //Pointer now is made to point to an array of size 5 created in the heap"<<endl;
                        cout<<"It is imporant to note that variables created in the stack DO NOT get deleted when going out of scope"<<endl;
                        cout<<"\t-This means that heap memory needs to be deallocated"<<endl;
                        cout<<"\t-This achieved through deleting the pointer -> delete [] p; //array"<<endl;
                        cout<<"\t\t-Does not delete the pointer just deallocates data pointed to"<<endl;
                        cout<<"\t\t-Never re-assign a pointer without first deallocating the memory or the original array can never be found"<<endl;
                        system ("PAUSE");
                        system("CLS");
                        break;
                    }
                    case 3:     //Coding sample
                    {
                        int x=10;
                        //Pointer coding example
                        cout << "Pointer Example:"<<endl;
                        cout << "Enter the size of the array you wish to create: "<<endl;
                        cin >> x;
                        int *pArr = new int[x];    //declearion of pointer and assignment to dynamic array
                                                //remember this pointer can be made to point to any new array in execution (delete orignal data)
                        for (int i=0; i<x; i++)
                        {
                            pArr[i] = i;   //Pointer then treated like a regular array
                        }

                        cout << "Contents of pointer:"<<endl;
                        for (int i=0; i<x; i++)         //Increment moves to next memory address
                        {
                            cout << pArr[i] << ", ";   //Pointer then treated like a regular array
                        }
                        cout << endl;
                        delete [] pArr;     //must always deallocate memory
                        pArr = nullptr;     //null used specifically ro create a null pointer
                        system ("PAUSE");
                        system("CLS");
                        break;
                    }
                    case 4:     //Pointer to a function
                    {
                        int x=0,y=0;
                        cout<<"A pointer can also be assigned to a function"<<endl;
                        cout <<"\tvoid (*funcPointer)(arguments); \\Decleration"<<endl;
                        cout <<"\tfunPointer=fnName; \\function assignemnt"<<endl;
                        cout <<"\t(*funcPointer)(arguments); \\Function call"<<endl;
                        cout <<"\tEssentially replacing the function name with a pointer in the decleratino and call"<<endl<<endl;

                        //Coding sample of pointer to a funtion
                        int (*funcPtr)(int, int);       //decleration of pointer to a function always in ()
                        cout<<"Demostration program: "<<endl;
                        cout<<"Enter 2 numbers"<<endl;
                        cout <<"1. ";
                        cin >> x;
                        cout <<"2. ";
                        cin >> y;
                        
                        funcPtr=max;        //assigning pointer to the max function
                        cout <<"Max nunmber is: "<< (*funcPtr)(x,y)<<endl;      //call to function
                        funcPtr=min;        //assigning pointer to the max function
                        cout <<"Min nunmber is: "<< (*funcPtr)(x,y)<<endl;      //Same pointer assiged to a different function with the same signature
                        
                        system ("PAUSE");
                        system("CLS");
                        break;
                    }
                    case 5:     //Common pointer errors
                    {
                        system("CLS");
                        cout<<"There are 3 main errors associtated with pointers:"<<endl<<endl;
                        cout<<"1. Unassigned pointers"<<endl;
                        cout<<"\t->This is whena a pointer is created but not assigned an address so some junk will feature as the pointer contents"<<endl<<endl;;
                        cout<<"\t\t int *p;  //can not amend the data associated with this pointer untill it is assigned"<<endl;
                        cout<<"2. Memory leak"<<endl;
                        cout<<"\t->If we do not deallocate memory before a pointer is changed"<<endl<<endl;
                        cout<<"3. Dangling pointers"<<endl;
                        cout<<"\t->If a pointer is deleted say by some function ant then referred to later on"<<endl;
                        system ("PAUSE");
                        system("CLS");
                        break;
                    }
                    case 0: break;
                    default: cout <<"Invalid selection";
                }
                break;
            }
            case 4: //Value by reference
            {
                cout << "Reference Values: (another use of ampersand - &)"<<endl;
                cout << "\t-Is used only at initialisation of a variable and MUST be assigned"<<endl;
                cout << "\t-Created another name for the same variable"<<endl;
                cout << "\t-Uses no memory"<<endl<<endl;

                //coding example of reference variable

                int x = 10;
                int &y = x;     //Reference variable y created as a nick name of x

                cout<<"For exmaple"<<endl;
                cout <<"int x = 10;"<<endl;
                cout <<"int &y = x;     //Reference variable y created as a nick name of x"<<endl;
                cout <<"x = "<< x <<endl;
                cout <<"y = "<< y <<endl;

                system ("PAUSE");
                system("CLS");
            }
            case 5:
            {
                cout <<"Static variable:"<<endl;
                cout <<"\t-Same properties as a global variable but only available within its scope"<<endl;
                cout <<"\t-Initialisation only called once"<<endl;
                cout <<"\t-Even if function goes out of scope the variable will still exist"<<endl<<endl;

                //multiple calls to fn to show static variable change
                cout <<"Coding example call to same function 3 times showing static variable holding value out of scope"<<endl;
                cout << "1 -->" <<staticOut(5)<<endl;   //Static variable created only on first function call
                cout << "2 -->" <<staticOut(5)<<endl;
                cout << "3 -->" <<staticOut(5)<<endl;
                staticOut(5);
                staticOut(5);

                system ("PAUSE");
                system("CLS");
                break;
            }
            case 0: break;
            default: cout<<"/nInvalid selection";
        }
    }while (select !=0);
    return 0;
}

//return max of 2 numbers
int max (int x, int y)
{
    return x>y?x:y;
}

//returns min of 2 numbers
int min (int x, int y)
{
    return x<y?x:y;
}   

//Function call to illustrate nature of static variables
int staticOut(int a)
{
    static int temp=0;
    temp+=a;
    //cout<<"Static variable on call: "<< temp <<endl;
    return temp;
}