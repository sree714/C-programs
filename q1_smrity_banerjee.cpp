//Smrity Banerjee
//18801019070

/*
Write a menu driven C++ program to calculate the area of a squire, a rectangle, a
triangle and a circle using function overloading. (No need to declare a class).
*/

#include <iostream>

using namespace std;

int area(int);

int area(int, int);

float area(float);

float area(float, float);

int main() {
    int s, l, b;
    float r, bs, ht;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Enter length and breath of rectangle: ";
    cin >> l >> b;
    cout << "Enter redius of circle: ";
    cin >> r;
    cout << "Enter the base and height of trangle: ";
    cin >> bs >> ht;

    cout << "Area of squar: " << area(s) << endl;
    cout << "Area of rectangle: " << area(l, b) << endl;
    cout << "Area of circle: " << area(r) << endl;
    cout << "Area of trangle: " << area(bs, ht) << endl;


    return 0;
}


int area(int s) {
    return s * s;
}


int area(int l, int b) {
    return l * b;
}


float area(float r) {
    return (3.14 * r * r);
}


float area(float bs, float ht) {
    return (bs * ht) / 2;
}
