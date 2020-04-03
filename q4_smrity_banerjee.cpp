//Smrity Banerjee
//18801019070

/*
Create a class Student with the following attributes:
Name (Character type pointer), roll, marks and year (Character type pointer).
Initialize the attributes using the constructor (using the constructor overloading)
create five student records and print the student name roll number who scored
highest.
*/

#include <iostream>
#include <string.h>

using namespace std;


class Student {
private :
    char *name;
    int roll;
    char *year;

public :
    int marks;

    void show();


    Student(char *n, int r, int m, char *yr) {
        int l = strlen(n);
        name = new char[l];
        strcpy(name, n);

        roll = r;
        marks = m;
        int l1 = strlen(yr);
        year = new char[l1];
        strcpy(year, yr);
    }

    Student() {
        cout << "Object is created" << endl;
    }
};


void Student::show() {
    cout << "Name : " << name << endl;
    cout << "Roll : " << roll << endl;
    cout << "Marks : " << marks << endl;
    cout << "Year : " << year << endl;
}

int main() {
    Student s[5] = {
            Student("A", 1, 50, "2020"),
            Student("B", 2, 95, "2020"),
            Student("C", 3, 98, "2020"),
            Student("D", 4, 45, "2020"),
            Student("E", 5, 99, "2020")
    };

    int a[5] = {s[0].marks, s[1].marks, s[2].marks, s[3].marks, s[4].marks};


    int i, j, temp;
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

            }
        }
    }

    for (i = 0; i < 5; i++) {
        if (a[0] == s[i].marks) {
            s[i].show();
        }
    }

    return 0;
}
