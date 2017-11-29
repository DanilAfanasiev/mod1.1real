#pragma once
#include <iostream>

using namespace std;

class Array
{
public:

	Array(); 
	Array(int* arr, const int n);
	Array(const Array&);

	Array operator +(const Array&);
	Array operator +=(const int&);
	Array operator -=(const int&);
	Array operator =(const Array&);
	bool operator ==(const Array&);

	friend istream& operator >> (istream& ,Array&);
	friend ostream& operator<< (ostream& ,const Array&);

private:
	int* array;
	int size;
};