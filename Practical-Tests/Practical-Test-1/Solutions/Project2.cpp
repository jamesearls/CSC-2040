// Project 2
#include <iostream>
using namespace std;

// 1.
void array_op(int* array, int size)
{
	// (1) test
	if (array == 0 || size <= 0) return;

	// (2) use array indexing to cycle through the elements of array to assign each element a value
	for (int n = 0; n < size; n++)
		array[n] = n;

	// (3) use array indexing to cycle through the elements of array to print out the value of each element
	for (int n = 0; n < size; n++)
		cout << array[n] << endl;

	// (4) use pointer arithmetic to cycle through the elements of array to double the value in each element
	int* temp_array = array;	
	for (int n = 0; n < size; n++) {
		*temp_array *= 2;	// or *temp_array = *temp_array * 2;
		temp_array++;		// or ++temp_array;
	}
	// if use array for the loop, array must be reset afterwards or (5) below won't work
	// for example, array can be reset as follows
	/*int* temp_array = array;
	for (int n = 0; n < size; n++) {
		*array *= 2;	
		array++;		
	}
	array = temp_array;*/

	// (5) use pointer arithmetic to print out the value of the element 1/3-size away from the beginning
	cout << *(array + size / 3) << endl;
}

int main1()
{
	int array[100];
	array_op(array, 100);

	return 0;
}

// 2.
int main()
{
	// (a)
	double pi = 3.1415926;
	double* ppi = &pi;

	// (b)
	double array[40];
	double* parray = array;
	for (int i = 0; i < 40; i++) 
		parray[i] = *ppi;	 // or *parray++ = *ppi; 

	// (c)
	double* array2 = new double[40];
	for (int i = 0; i < 40; i++) 
		array2[i] = array[i];
	for (int i = 0; i < 40; i++)
		cout << array2[i] << endl;

	// (d)
	delete[] array2; 
	// marks will be deducted for trying to delete ppi or parray

	return 0;
}

