//main objective is to illudtrate the Templacte Classs
//secondary objective is to show a basic implementatin of the stack

#include<iostream>
#include<stdlib.h>

using namespace std;

//At creation of each body need to specify template class
template <class T>
class Stack
{
    private:
        T *ptr;      //Pointer to array(stack) - Generral tye T
        int top;       //Head
        int size;      //Size of stack
    public:
        Stack(int sz);
        void push(T P);
        T pop();
        void display();
        ~Stack();
};

int main()
{
    //Need to specify data type of object at creation
    Stack<int> s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    //s1.push(6); 
    s1.display();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.display();

    //Use same class now to store string types
    Stack<string> s2(5);
    s2.push("Lavein");
    s2.push("Thomas");
    s2.display();


    system("PAUSE");
    system("CLS");
    return 0;
}

template <class T>
//At call of class in scope resolution need to specify the templace class type
Stack<T>::Stack(int sz)
{
    size = sz;
    ptr = new T[size];
    top=-1;
}

template <class T>
void Stack<T>::push(T P)
{
    if (top == size-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        ++top;
        ptr[top]=P;
    }
}

template <class T>
T Stack<T>::pop()
{
    T x = 0;
    if (top == -1)
    {
        cout <<"Stack is empty"<<endl;
    }
    else
    {
        x=ptr[top];
        --top;
    }
    return x;
}

template <class T>
void Stack<T>::display()
{
    for(int i=0; i<=top; i++)
    {
        cout <<i<<"."<<ptr[i]<<endl;
    }
}

template <class T>
Stack<T>::~Stack()
{
    delete [] ptr;
    cout<<"Stack Destroyed"<<endl;
}