// Project 3
// must have appropriate include guards
// 1.
#ifndef RANDARRAY_H
#define RANDARRAY_H

class RandArray {
private:
	int* data;	// private data, an integer array
	int length;	// private data, length of the data array

public:
	// constructor, which sets length to the given len, allocates memory 
	// for the data array to the given length, and sets all elements of the 
	// array to random numbers between 0 and max_num-1 inclusive, by calling 
	// function rand() % max_num available by #include <iostream>
	RandArray(int len, int max_num);
	// destructor, to free the memory allocated for the data array
	~RandArray();

	// function, to print the data array
	void print_data();

	// 3. (c) add a default or parameter-less constructor
	RandArray();
};

#endif
