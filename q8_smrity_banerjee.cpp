//Smrity Banerjee
//18801019070

/*
Write an OOP in C++ to overload ( ) operator to populate a vector object and +
operator to add two vector objects and display the result.
*/

#include <iostream>

using namespace std;

class Vectors {
private:
    int *vector;
public:
    Vectors(int);

    Vectors(const Vectors &);

    ~Vectors();

    Vectors operator+(Vectors &);

public:
    void display() {
        cout << *vector;
    }

};


Vectors::Vectors(int value) {
    this->vector = new int[3];
    for (auto i = 0; i < 3; i++) {
        vector[i] = 3;
    }
}

Vectors::Vectors(const Vectors &copy) {
    this->vector = new int[3];
    for (auto i = 0; i < 3; i++) {
        vector[i] = copy.vector[i];
    }
}

Vectors::~Vectors() {
    delete[] vector;
}

Vectors Vectors::operator+(Vectors &obj) {
    for (auto i = 0; i < 3; i++)
        this->vector[i] += obj.vector[i];

    return *this;
}

int main() {
    Vectors A(3), B(3);
    Vectors C = A + B;
    C.display();
    return 0;
}
