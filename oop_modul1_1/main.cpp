#include <iostream>
#include "Array.h"

using namespace std;

int main() {

	int mas1[] = { 0, 1, 2, 3, 4 };
	int mas2[] = { 3, 4, 5, 6, 7 };

	Array a(mas1, 5);
	Array b(mas2, 5);

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	cout << "Sum test: ";
	cout << a + b << endl;

	cout << "Add 8 to A: ";
	a += 8;
	cout << a << endl;

	cout << "Add 0 to A: ";
	a += 8;
	cout << a << endl;

	cout << "Sub 0 from A: ";
	a -= 0;
	cout << a << endl;

	cout << "Sub 12 from A: ";
	a -= 12;
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