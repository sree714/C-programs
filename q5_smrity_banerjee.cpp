//Smrity Banerjee
//18801019070

/*
Write an OOP in C++ to create a class called DATE and overload the postfix ++
operator to find the next date.
*/

#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public :
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    friend Date operator++(Date &);

    void display() {
        cout << "Date: " << day << "-" << month << "-" << year << endl;
    }
};

Date operator++(Date &x) {
    return Date(x.day + 1, x.month, x.year);
}

int main() {
    int dd, mm, yyyy;
    cout << "Enter date: ";
    cin >> dd;
    cout << "Enter month: ";
    cin >> mm;
    cout << "Enter year: ";
    cin >> yyyy;

    Date d1(dd, mm, yyyy);
    Date d2 = ++(d1);
    d2.display();
    return 0;
}
