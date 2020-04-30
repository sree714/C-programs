/*
Write a C++ program that will catch any types of exceptions thrown by
the try block.
*/


#include <iostream>
using namespace std;

int main()
{
int x = -1;

cout << "Before try \n";
try {
	cout << "Inside try \n";
	if (x < 0)
	{
		throw x;
		cout << "After throw (Never executed) \n";
	}
}
catch (...) {
	cout << "Exception Caught \n";
}

cout << "After catch (Will be executed) \n";
return 0;
}
