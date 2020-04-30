/*
Write a program to create a class called ‘Employee’ with the following
data members {e_id, e_name, sal}. Create 5 Employee objects, read data
for them and print their data in proper formatted form. Use IOS
formatting functions for formatting the outputs.
*/

#include <iostream>
using namespace std;

class Employee
{
    public:
    int e_id;
    char e_name[10];
    int sal;
};

int main()
{
    Employee e[4];

    for(int i=0;i<5;i++)
    {
        cout<<"Enter id: ";
        cin>>e[i].e_id;
        cout<<"Enter name: ";
        cin>>e[i].e_name;
        cout<<"Enter sal: ";
        cin>>e[i].sal;
    }

    for(int i=0;i<5;i++)
    {
        cout.width(5);                  //Using the output width() function
        cout<<"ID :"<<e[i].e_id<<endl;
        cout<<"Name :"<<e[i].e_name;
        cout.fill(')');
        cout<<endl;
        cout<<"Sal :"<<e[i].sal<<endl;
        cout<<"\n";
    }

    return 0;
}
