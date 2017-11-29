#include <iostream>
#include "Array.h"

using namespace std;

Array::Array()
{

}

Array::Array(int* arr, const int n)
{
	size = n;
	array = new int[n];
	for (int i = 0; i <= n-1; i++)
		array[i] = arr[i];
}

Array::Array(const Array& other)
{
	size = other.size;
	array = new int[size];

	for (int i = 0; i < size; i++)
		array[i] = other.array[i];
}


Array Array::operator +=(const int& elem) {
	int* dynArr = new int[size + 1];
		for (int i = 0; i < size; i++) {
			dynArr[i] = array[i];
		}
		dynArr[size] = elem;
		size++;
		if (array != nullptr) {
			delete[]array;
		}
		array = dynArr;
		return *this;
}


Array Array::operator +(const Array& other) {

	Array array = (*this);

	for (int i = 0; i < other.size; i++)
		array += other.array[i];
	return array;
}


Array Array::operator -=(const int& elem) {
	int dElem = -1;
	for (int i = 0; i < size && dElem == -1; i++) {
		{
			if (array[i] == elem)
				dElem = i;
		}
	}
		if (dElem == -1)
			return (*this); 
		else {

			int* dynArr = new int[size - 1];
			
			for (int i = 0; i < dElem; i++) {
				dynArr[i] = array[i];
			}
			for (int i = dElem + 1; i < size; i++) {
				dynArr[i-1] = array[i];
			}
			size--;
			if (array != nullptr) {
				delete[]array;
			}
			array = dynArr;
			return *this;
		}
}


Array Array::operator =(const Array& other) {
	if (this != &other) {
		if (other.size == 0 || size != other.size) {
			if (array != nullptr)
				delete[]array;
			array = nullptr;
			size = 0;
		}
		if (other.size > 0) {
			if (array == nullptr) {
				array = new int[other.size];
				size = other.size;
			}
			for (int i = 0; i < size; i++) {
				array[i] = other.array[i];
			}
		}
		return *this;
	}
	return *this;
}


bool Array::operator ==(const Array& other) {
	if (this == &other)
		return true;
	return false;
}

istream& operator >> (istream& s,Array arr) {
	int i;
	cin >> i;
	arr += i;
	return s;
}


ostream& operator<< (ostream& s, const Array& arr) {
	if (arr.size == 0) {
		cout << "blank array" << endl;
	}
	else {
		for (int i = 0; i < arr.size - 1; i++) {
			cout << arr.array[i] << " ";
		}
		cout << arr.array[arr.size - 1];
	}
	return s;
}