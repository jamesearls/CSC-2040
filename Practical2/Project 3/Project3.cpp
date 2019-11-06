#include "ins_rem.h"
#include <iostream>
using namespace std;

double* ptr_to_cube_of(double x)
{
	double* cube = new double;
	*cube = x * x * x;
	return cube;
}

int main()
{
	int len = 8;
	int* array = new int[len];
	for (int t = 0; t < len; t++) array[t] = t;

	// array before insertion
	for (int t = 0; t < len; t++) cout << array[t] << " ";
	cout << endl;

	// insert a value 40 at element position 3
	insert(array, len, 3, 40);

	// array after insertion
	for (int t = 0; t < len; t++) cout << array[t] << " ";
	cout << endl;

	// remove an element at index position 6 
	remove(array, len, 6);

	// array after remove
	for (int t = 0; t < len; t++) cout << array[t] << " ";
	cout << endl;

	// free the array memory after use
	delete[] array;

	// call function ptr_to_cube_of
	double* px3 = ptr_to_cube_of(3.0);
	cout << *px3 << endl;
	delete px3;

	// The above function & call will have no memory violation - this is because
	// cube points to a space allocated in the heap memory, which will 
	// remain allocated until manually deleted or the program finishes.
	// One can free this space after use, as in the above example, to prevent memory leak.  

	return 0;
}