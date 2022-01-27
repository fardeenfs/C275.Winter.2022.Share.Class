// Based on Zac
#include <iostream>
#include <string>

using namespace std;

template <typename T>
void swapItems(T& arg1, T& arg2) {
	T arg3 = arg1;
  arg1 = arg2;
  arg2 = arg3;
}

int main() {
	int a = 4, b = 0;
	// int a = 4, b = 0, x = -1;
	float c = 4.1, d = 0.1;

/*
  x = b;
  b = a;
  a = x;
*/
  swapItems(a,b);
  swapItems(c,d);

  string k = "there";
  string l = "hello";
  swapItems(k,l);


	cout << a << ' ' << b << endl;
	cout << c << ' ' << d << endl;
  cout << k << ' ' << l << endl;
}
