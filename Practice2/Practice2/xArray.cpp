#include "xArray.h"

xArray::xArray(int size)
	: size(size)
{
	character = new char[size];
	ascii = new int[size];
}

//copy constructor
xArray::xArray(const xArray& o) {
	size = o.size;
	character = new char[o.size];
	ascii = new int[o.size];

	//for loop to copy values over
	for (int i = 0; i < size; i++) {
		character[i] = o.character[i];
		ascii[i] = o.ascii[i];
	}
}
xArray::~xArray()
{
	delete[] character;
	delete[] ascii;
}

bool xArray::operator<=(const xArray& b)
{
	int sum = 0;
	for (int n = 0; n < size; n++)
		sum += ascii[n];

	int b_sum = 0;
	for (int n = 0; n < b.size; n++)
		b_sum += b.ascii[n];

	return sum <= b_sum;
}


