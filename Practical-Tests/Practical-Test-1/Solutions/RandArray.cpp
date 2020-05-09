// Project 3
#include "RandArray.h"
#include <iostream>

using namespace std;

// 2.
// constructor
RandArray::RandArray(int len, int max_num)
	: length(len)
{
	// test the given parameters
	if (length < 0) {
		cout << "Invalid data length: " << length << endl;
		exit(1);
	}
	if (max_num < 1) {
		cout << "Invalid number range: " << max_num << endl;
		exit(1);
	}

	// allocate data array to the given length
	data = new int[length];
	// set the array with random numbers within the given range
	for (int n = 0; n < length; n++)
		data[n] = rand() % max_num;
}

// destructor
RandArray::~RandArray()
{
	// free the memory allocated for the data array
	delete[] data; 
	// or more appropriately
	// if(data) delete[] data;
}

// function to print the data array
void RandArray::print_data()
{
	for (int n = 0; n < length; n++)
		cout << data[n] << endl;
}

// 3. (c) add a default or parameter-less constructor
RandArray::RandArray()
{
	data = 0; 
	length = 0;	// optional
}
