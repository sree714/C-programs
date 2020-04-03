//Smrity Banerjee
//18801019070

/*
Create a class Vehicle that stores the number of wheals and speed. Create
derived classes from the Vehicle class Car and Truck with data members
number of passengers and load limit respectively.
Write main() function to create objects of these classes and display all the
information about the car and truck. Also compare the speed of the two vehicles,
car and truck and display “faster” or “slower” if the car is faster or slower than
truck.
*/

#include <iostream>
#include <cstring>

using namespace std;

class Truck;

class Vehicle {
protected:
    int whiles;
    float speed;
};

class Car : public Vehicle {
private :
    int passenger;
public:
    Car() {
        cout << "Car" << endl;
        whiles = 4;
        speed = 80;
    }

    void input() {
        cout << "Enter the number of passenger: ";
        cin >> passenger;
    }

    void display() {
        cout << "Car wheel: " << whiles << endl;
        cout << "Car Speed: " << speed << endl;
        cout << "Car passenger: " << passenger << endl;
    }

    friend void compare(Car &c, Truck &t);
};


class Truck : public Vehicle {
private :
    int load;
public:
    Truck() {
        cout << "Truck" << endl;
        whiles = 6;
        speed = 50;
    }

    void input() {
        cout << "Enter load: ";
        cin >> load;
    }

    void display() {
        cout << "Truck wheel: " << whiles << endl;
        cout << "Truck Speed: " << speed << endl;
        cout << "Truck load: " << load << endl;
    }

    friend void compare(Car &c, Truck &t);
};

void compare(Car &c, Truck &t) {
    if (c.speed > t.speed) {
        cout << "Car is faster";
    } else {
        cout << "Truck is faster";
    }
}


int main() {
    Car c;
    c.input();
    Truck t;
    t.input();
    c.display();
    t.display();
    compare(c, t);
    return 0;
}
