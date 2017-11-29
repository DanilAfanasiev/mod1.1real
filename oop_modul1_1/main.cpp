#include <iostream>
#include "Array.h"

using namespace std;

int main() {

	int arr1[] = { 0, 1, 2, 3, 4 };
	int arr2[] = { 2, 3, 4, 0, 1 };

	Array a(arr1, 0);
	Array b(arr2, 0);

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	cout << "Sum test: ";
	cout << a + b << endl;

	cout << "Add 5 to A: ";
	a += 5;
	cout << a << endl;

	cout << "Add 0 to A: ";
	a += 0;
	cout << a << endl;

	cout << "Sub 0 from A: ";
	a -= 0;
	cout << a << endl;

	cout << "Sub 3 from A: ";
	a -= 3;
	cout << a << endl;

	cout << "Compare A and B: ";
	cout << (a == b) << endl;

	Array c = a;
	cout << "C: " << c << endl;
	cout << "Compare A and C: "; 
	cout << (a == c) << endl;


	system("pause");
	return 0;
}