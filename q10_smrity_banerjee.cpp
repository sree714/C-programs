//Smrity Banerjee
//18801019070

/*
Create a abstract class Student with the following data members:
Student Name, Student Course, Student Roll, Grades for Sem1 to Sem6.
• Create two derived Classes MCA Student and MSc Student with data
members: Industrial Training Marks and Term Paper Marks respectively.
• Create two pure virtual functions read_data() & display_data() for accepting
data and display all records. Create another function to calculate the C.G.P.A
for MCA and MSc students separately.
• Create functions to search for the records of a particular student by his Roll.
• Store all data to a file name student.dat to make search experience more
realistic.
*/

#include <iostream>
#include <string.h>

using namespace std;


class Student {
    //Student Name, Student Course, Student Roll, Grades for Sem1 to Sem6
public :
    char studentName[30], studentCourse[30];
    int studentRoll;
    float grades[5];
};


class Mca : public Student {
    float cgpa = 0;
    //Industrial Training Marks and Term Paper Marks respectively.
private :
    float itm, tpmr;

    //Create two pure virtual functions read_data() & display_data() for accepting data and display all records.
public :
    void read_data(char sName[30], char sCourse[30], int sRoll, float sgrades[55], float sitm, float stpmr) {
        strcpy(studentName, sName);
        strcpy(studentCourse, sCourse);
        studentRoll = sRoll;
        for (int i = 0; i < 6; i++) {
            grades[i] = sgrades[i];
        }
        itm = sitm;
        tpmr = stpmr;
    }

public :
    void display_data() {
        cout << "Student Name : " << studentName << endl;
        cout << "Student Course : " << studentCourse << endl;
        cout << "Student Roll : " << studentRoll << endl;
        cout << "Grades" << endl;
        for (int i = 0; i < 5; i++) {
            cout << grades[i] << endl;
            cgpa = cgpa + grades[i];
        }
        cout << "Student Industrial Training Marks : " << itm << endl;
        cout << "Term Paper Marks : " << tpmr << endl;
    }

public :
    float calculateCGPA() {
        float finalCGPA = cgpa / 6;
        return finalCGPA;
    }

};


class Msc : public Student {
    float cgpa = 0;
    //Industrial Training Marks and Term Paper Marks respectively.
private :
    float itm, tpmr;

    //Create two pure virtual functions read_data() & display_data() for accepting data and display all records.
public :
    void read_data(char sName[30], char sCourse[30], int sRoll, float sgrades[55], float sitm, float stpmr) {
        strcpy(studentName, sName);
        strcpy(studentCourse, sCourse);
        studentRoll = sRoll;
        for (int i = 0; i < 6; i++) {
            grades[i] = sgrades[i];
        }
        itm = sitm;
        tpmr = stpmr;
    }

public :
    void display_data() {
        cout << "Student Name : " << studentName << endl;
        cout << "Student Course : " << studentCourse << endl;
        cout << "Student Roll : " << studentRoll << endl;
        cout << "Grades" << endl;
        for (int i = 0; i < 5; i++) {
            cout << grades[i] << endl;
            cgpa = cgpa + grades[i];
        }
        cout << "Student Industrial Training Marks : " << itm << endl;
        cout << "Term Paper Marks : " << tpmr << endl;
    }

public :
    float calculateCGPA() {
        float finalCGPA = cgpa / 6;
        return finalCGPA;
    }

};


int main() {
    Mca s1;
    Msc s2;
    Msc s3;
    Mca s4;


    float grades1[] = {9.1, 9.7, 9.7, 9.4, 9.2, 9.9};

    s1.read_data("Ram", "MCA", 1, grades1, 9.7, 9.8);
    s1.display_data();
    cout << "CGPA : " << s1.calculateCGPA();


    cout << endl;

    float grades2[] = {9.2, 9.7, 9.1, 9.5, 9.2, 9.9};

    s2.read_data("Sam", "MSC", 1, grades2, 9.7, 9.8);
    s2.display_data();
    cout << "CGPA : " << s2.calculateCGPA();

    cout << endl;

    float grades3[] = {9.4, 9, 9.1, 9.8, 9.2, 9.4};

    s3.read_data("Jadu", "MSC", 2, grades2, 9.7, 9.8);
    s3.display_data();
    cout << "CGPA : " << s3.calculateCGPA();

    cout << endl;

    float grades4[] = {9, 9, 8.1, 7.8, 9.2, 9.4};

    s4.read_data("Madhu", "MCA", 2, grades2, 9.7, 9.8);
    s4.display_data();
    cout << "CGPA : " << s4.calculateCGPA();

    cout << endl;

    if (s1.calculateCGPA() > s4.calculateCGPA()) {
        cout << "Roll: " << s1.studentRoll << " is MCA Topper" << endl;
    } else {
        cout << "Roll: " << s4.studentRoll << " is MCA Topper" << endl;
    }

    if (s2.calculateCGPA() > s3.calculateCGPA()) {
        cout << "Roll: " << s2.studentRoll << "is MSC Topper" << endl;
    } else {
        cout << "Roll: " << s3.studentRoll << " is MSC Topper" << endl;
    }
    return 0;
}
