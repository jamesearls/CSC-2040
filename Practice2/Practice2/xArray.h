#ifndef XARRAY_H
#define XARRAY_H
class xArray
{
public:
	xArray(int size);
	//copy constructor
	xArray(const xArray& o);
	~xArray();

	//operator overloading 
	bool operator<=(const xArray& b);

	int size;
	char* character;
	int* ascii;

};

#endif