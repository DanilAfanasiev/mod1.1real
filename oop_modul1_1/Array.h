#pragma once
#include <iostream>
using namespace std;

class Array
{
public:

	Array(); 
	Array(int* arr, const int n);
	Array(const Array& );

	Array operator +(const Array&);
	Array operator +=(const Array&);
	Array operator -=(const Array&);
	Array operator =(const Array&);
	Array operator ==(const Array&);


private:
	int* array;
	int size;
};