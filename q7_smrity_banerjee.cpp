//Smrity Banerjee
//18801019070

/*
Write an OOP in C++ to create a class String and overload the + operator to add two
strings using friend function.
*/

#include <iostream>
#include <cstring>

using namespace std;


class String {
private :
    char str[20];
public:
    void accept() {
        cout << "Enter";
        cin >> str;
    }

    void display() {
        cout << str << endl;
    }

    friend String operator+(String x);

    String operator+(String x) {
        String s;
        strcat(str, x.str);
        strcpy(s.str, str);
        return s;
    }
};

int main() {

    String s1, s2, s3;
    s1.accept();
    s2.accept();
    s1.display();
    s2.display();
    s3 = s1 + s2;
    s3.display();
    return 0;
}
