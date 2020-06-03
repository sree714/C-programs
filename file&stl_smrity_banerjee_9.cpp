/*
 * Write a C++ program to create a vector and insert some items in it.
After that perform the following operation on the vector:
Display the content of the Vector, Display the size of the Vector, POP
two items from the beginning of the vector and display the vector.
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create an empty vector
    vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

	cout<<"Elements of vector: "<<endl;
    for (int x : vect)
        cout << x << endl;

    cout<<"size of vector: ";
    cout<<vect.size()<<endl;

    vect.pop_front();
    vect.pop_front();

    cout<<"After pop elements of vector: "<<endl;
    for (int x : vect)
        cout << x << endl;

    return 0;
}
