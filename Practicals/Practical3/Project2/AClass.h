#ifndef AClass_h
#define	AClass_h
class AClass
{
private:
	double* data;		//private double, a double-precision array
	int length;		//private data, length of the data array
public:
	/*Constructor, which allocates memory for the data array to
	the given length len, and sets all elements of the array to the
	given value val*/

	AClass(int len, double val);

	//Destructor to free the memor allocated for the data array
	~AClass();
};

#endif