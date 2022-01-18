#include <iostream>
using namespace std;

void swap(double &, double &);
void pow(int *, int);
void zero_out(int);

int main() {
	const int arr_size = 5;
	int numbers[arr_size] = {-2, 5, 0, 8, 1};
	double first_var = 1, second_var = -1;
	cout << "1st variable is: " << first_var << ", 2nd variable is: " << second_var << endl;
	swap(first_var, second_var);
	cout << "1st variable is: " << first_var << ", 2nd variable is: " << second_var << endl;

	pow(&numbers[0], arr_size);
	for (int x: numbers)	// range-based for loop (since C++11)
		cout << x << " ";
	cout << endl;
	return 0;
}

void zero_out(int var) {
	var = 0;
	// what if we return var?
}

void swap(double &var1, double &var2) {
	double tmp;
	tmp = var1;
	var1 = var2;
	var2 = tmp;
}

void pow(int *arr, int len) { 
// what if we change the type of arr to "const int *"?
	for (int i=0; i<len; i++)
		*(arr+i) *= *(arr+i);
}