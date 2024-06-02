#include <iostream>
using namespace std;

int main() {
	// declare integer variables
	int x;
	int y;
	int z;

	// prompt user for integer input
	std::cout << "Enter an integer..." << endl;
	std::cin >> x;
	std::cout << "Enter a second integer..." << endl;
	std::cin >> y;
	std::cout << "Enter a third integer..." << endl;
	std::cin >> z;

	// initialize pointers and set pointer values
	int* xPtr = new int;
	int* yPtr = new int;
	int* zPtr = new int;

	// display contents of the variables
	std::cout << x << endl;
	std::cout << y << endl;
	std::cout << z << endl;

	// display contents of pointers
	std::cout << *xPtr << endl;
	std::cout << *yPtr << endl;
	std::cout << *zPtr << endl;

	// use delete operator
	delete xPtr;
	delete yPtr;
	delete zPtr;

	// return 0
	return 0;

}
