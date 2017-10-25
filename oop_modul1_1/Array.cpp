#include <iostream>
#include "Array.h"

#include "Array.h"
using namespace std;

Array::Array()
{

}


Array::Array(int* arr, const int n)
{
	array = new int[n];
	for (int i = 0; i <= n-1; i++)
		array[i] = arr[i];
	size = n;
}