/*
	Variation 2

	A simple demonstration of how to use command-line arguments.

	The second half of the program assumes the parameters are "A <num1> <num2>"
	and it will print the sum of the two numbers.

	Course: CMPUT 275
	Zac Friggstad, 2021

	Modified by Paul Lu, 2022
*/

#include <iostream>
using namespace std;

// int main(int argc, char** argv[]) {

int main(int argc, char* argv[]) {
	cout << "Number of parameters: " << argc << endl;

	// now print out each parameter
	cout << "Parameters:" << endl;
	for (int i = 0; i < argc; i++) {
		cout << "argv[" << i << "] = " << argv[i] << endl;
	}
	cout << endl;

	return 0;
}
