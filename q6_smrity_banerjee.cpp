//Smrity Banerjee
//18801019070

/*
Write an OOP in C++ to create a class string and overload >, < and == operator to
compare two string objects.
*/

#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    char str[25];
public:
    String(char str[]) {
        strcpy(this->str, str);
    }

    int operator==(String s2) {
        if (strcmp(str, s2.str) == 0)
            return 1;
        else
            return 0;
    }

    int operator<(String s3) {
        if (strlen(str) < strlen(s3.str))
            return 1;
        else
            return 0;
    }

    int operator>(String s4) {
        if (strlen(str) > strlen(s4.str))
            return 1;
        else
            return 0;
    }


};

void compare(String s1, String s2) {
    if (s1 == (s2))
        cout << "Equal" << endl;
    else if (s1 > (s2))
        cout << "grater" << endl;
    else if (s1 < (s2))
        cout << "less" << endl;
    else
        cout << "same" << endl;

}


int main() {
    char str1[] = "ABC";
    char str2[] = "WXYZ";
    char str3[] = "ABC";
    String s1(str1), s2(str2), s3(str3);

    compare(s1, s2);
    compare(s1, s3);


    return 0;
}
