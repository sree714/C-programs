//Smrity Banerjee
//18801019070

/*
Write an OOP in C++ to create a class Husband to hold the information of husband
(Name, Phone_No, and Salary) and another class Wife to hold the information of
wife (Name, Phone_No, and Salary). Take data members and member functions as
required and compute the total income of the family using a friend function.
*/

#include <iostream>

using namespace std;

class Wife;

class Husband {
public :
    char name[30];
    float salary;
    long int ph;


public :
    void input() {
        cout << "Enter husbands name :";
        cin >> name;
        cout << "Enter salary :";
        cin >> salary;
        cout << "Enter phone number :";
        cin >> ph;
    }

    void display() {
        cout << "Husbands name :" << name << endl;
        cout << "Husbands salary :" << salary << endl;
        cout << "Husbands ph_no :" << ph << endl;
    }

    friend void totsla(Husband &h, Wife &w);
};


class Wife {
public :
    char name[30];
    float salary;
    long int ph;

public :
    void input() {
        cout << "Enter wife name :";
        cin >> name;
        cout << "Enter salary :";
        cin >> salary;
        cout << "Enter phone number :";
        cin >> ph;
    }

    void display() {
        cout << "Wife name :" << name << endl;
        cout << "Wife salary :" << salary << endl;
        cout << "Wife ph_no :" << ph << endl;
    }

    friend void totsla(Husband &h, Wife &w);
};


void totsal(Husband &h, Wife &w) {
    float ns;
    ns = h.salary + w.salary;
    cout << "Total income :" << ns;
}

int main() {

    Husband h;
    Wife w;
    cout << "Enter husband info: " << endl;
    h.input();
    cout << "Enter wife info: " << endl;
    w.input();

    cout << "\n";
    h.display();
    w.display();
    totsal(h, w);

    return 0;
}
