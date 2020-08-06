//**************************************************************//
//**                      ACCESS SPECIFIERS                   **//
//**************************************************************//
//There are 3 types:
    //Public: Accessible any where including from external functions
    //Protected: Accessible from derived classes but not externally
    //Private: Only accessible within its own class

//**************************************************************//
//**                   TYPES OF INHERITANCE                   **//
//**************************************************************//

//SINGLE:
//  ________            ________
//  |      |            |      |             
//  |  A   |    ---->   |  B   |
//  |______|            |______|  

//HEIRARCHICAL: (Polymorphism)
//  ________            
//  |      |            
//  |  B   |    ---->|  
//  |______|         | 
//  ________         |      ________
//  |      |         |      |      |             
//  |  C   |    ---->|----> |  A   |
//  |______|         |      |______|  
//  ________         |  
//  |      |         |  
//  |  D   |    ---->|  
//  |______|            

//MULTILEVEL:
//  ________         ________          ________
//  |      |         |      |          |      |             
//  |  A   |  ---->  |  B   |  ---->   |  C   |
//  |______|         |______|          |______|  

//MULTIPLE: (Specialisation)
//                       ________            
//                       |      | 
//                |----> |  B   | 
//                |      |______| 
// ________       |      ________ 
// |      |       |      |      | 
// |  A   |  ---->|----> |  C   | 
// |______|       |      |______| 
//                |      ________
//                |      |      |
//                |----> |  D   |
//                       |______|            

//With Inheritance access specifiers work in a similar way as with variables within a class
//A derived class which is assigned as a child using protected
    //The child can access members from parent class expcept for Private variables
    //All variables even publically defined variables become protected in ingerited class

//Example program will create an employee class
//Specialisation with PartTime and FullTime employees (Daily and Monthly rates)
//Display name, EID and Pay method and amount.

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Employee
{
    private:
        int empID;
        string name, surname;
    public:
        //Constructor
        Employee();
        Employee(int ID, string NAME, string SURNAME);
        //Accessors
        int getID();
        string getName();
        string getSName();
        //Mutator
        //int setEmpID();
        //Destructor
        ~Employee();
};



class partTime:public Employee
{
    private:
        int wage;
    public:
    partTime();
    partTime(int W, int ID, string NM, string SN):Employee(ID, NM, SN)
    {
        wage = W;
        //cout << "Parameterised constructor called for: "<<this->getID()<<": "<< this->getName() <<" "<<this->getSName()<<"(R"<<wage<<")"<<endl<<endl;
    }
    int getWage();

};

class fullTime:public Employee
{
    private:
        int salary;
    public:
    fullTime();
    fullTime(int S, int ID, string NM, string SN):Employee(ID, NM, SN)
    {
        salary = S;
        //cout << "Parameterised constructor called for: "<<this->getID()<<": "<< this->getName() <<" "<<this->getSName()<<"(R"<<salary<<")"<<endl<<endl;
    }
    int getSal();

};

int main()
{
    //Employee E, E1(123, "Levine","Thomas");
    partTime P, P1(500,123,"Levine","Thomas");
    fullTime F, F1(5000,234,"Trushann","Thomas2");
    
    cout << "Employee ID\t: "<< F1.getID()<<" (Full Time)"<<endl;
    cout <<"Name\t\t: "<< F1.getName()<<endl;
    cout <<"Surname\t\t: "<< F1.getSName()<<endl;
    cout <<"Salary\t\t: "<<F1.getSal()<<endl;
    cout <<"*************************************"<<endl<<endl;

    cout << "Employee ID\t: "<< P1.getID()<<" (Part Time)"<<endl;
    cout <<"Name\t\t: "<< P1.getName()<<endl;
    cout <<"Surname\t\t: "<< P1.getSName()<<endl;
    cout <<"Salary\t\t: "<<P1.getWage()<<endl;
    cout <<"*************************************"<<endl<<endl;

    return 0;
}

Employee::Employee()
{
    empID = 0;
    name = "Test";
    surname = "Default";
    cout << "Default constructor called for: "<<empID<<": "<< name <<" "<<surname <<endl<<endl;
}
Employee::Employee(int ID, string NAME, string SURNAME)
{
    empID = ID;
    name = NAME;
    surname = SURNAME;
    //cout << "Parameterised constructor called for: "<<empID<<": "<< name <<" "<<surname <<endl<<endl;
}
int Employee::getID()
{
    return this->empID;
}
string Employee::getName()
{
    return this->name;
}
string Employee::getSName()
{
    return this->surname;
}
Employee::~Employee()
{
    cout<<"Emp base class destrroyed"<<endl;
}

partTime::partTime()
{
    wage = 0;
    //cout << "Default constructor called for: " << this->getID() << ": " << this->getName() << " " << this->getSName() << "(R"<< wage << ")" <<endl<<endl;
}
int partTime::getWage()
{
    return wage;
}
fullTime::fullTime()
{
    salary = 0;
    //cout << "Default constructor called for: " << this->getID() << ": " << this->getName() << " " << this->getSName() << "(R"<< salary << ")" <<endl<<endl;
}
int fullTime::getSal()
{
    return salary;
}