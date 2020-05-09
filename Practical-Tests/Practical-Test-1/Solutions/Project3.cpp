// Project 3 test
#include "RandArray.h"

// 3.
int main()
{
	// (a)
	RandArray x(100, 26);	// Not x(100, 25)! 
	x.print_data();

	// (b)
	RandArray* p = new RandArray(50, 11);	// Not RandArray(50, 10)!
	p->print_data();
	delete p;

	// (c)
	RandArray array1[5];
	RandArray* array2 = new RandArray[5]; // a dynamic array created using new

	return 0;
}
