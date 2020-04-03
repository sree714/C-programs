//Smrity Banerjee
//18801019070

/*
Given below the details of a class Employee with following members:
Data Member: Employee_Number, Employee_Name, Basic_Sal, DA, MA, Net_Sal
Member Functions: to read the data, to calculate Net_Sal and to print data
members.
Write an OOP in C++ to read the data of n employees and compute Net_Sal of each
employee and display them. (DA=52% and MA=15% of basic)
*/

#include <iostream>

using namespace std;

class Employee {
private :
    int emp_no;
    char name[30];
    float basic, DA, MA, NET;
public :
    void input();

    void calculation();

    void display();
};


void Employee::input() {
    cout << "Enter details" << endl;
    cin >> name;
    cin >> emp_no;
    cin >> basic;
}

void Employee::calculation() {
    DA = basic * 0.52;
    MA = basic * 0.15;
    NET = basic + DA + MA;
}

void Employee::display() {
    cout << "Name: " << name << endl;
    cout << "Emp.no:  " << emp_no << endl;
    cout << "Salary: " << NET << endl;
}

int main() {


    int i, n;
    cout << "Enter the no. of emplyee :";
    cin >> n;
    Employee e[n];

    for (i = 0; i < n; i++) {
        e[i].input();
        e[i].calculation();
    }

    cout << "Details of emplyeis are :" << endl;
    for (i = 0; i < n; i++) {
        e[i].display();
    }

    return 0;
}
