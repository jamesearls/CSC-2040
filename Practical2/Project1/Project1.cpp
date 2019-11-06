#include <iostream>;
using namespace std;

int main()
{
	int sample[10]; // this reserves 10 integer elements

		// load the array
	for (int t = 0; t < 10; t++)	//for loops are useful to process arrays
		sample[t] = t;

	// display the array
	for (int t = 0; t < 10; t++)
		cout << "This is sample [" << t << "]: " << sample[t] << endl;
	cout << endl;

	char sample2[20] = "This is a test.";

	//display the array
	cout << sample2 << endl;

	//define a pointer to start of the sample array using the array name
	int* p = sample;

	//load the sample array using pointer arithmetic
	for (int t = 0; t < 10; t++)
		*p++ = t * t;

	//display the sample array using pointer arithmetic
	p = sample;  //when you comment this the numbers go skitz
	for (int t = 0; t < 10; t++)
		cout << "This is sample [" << t << "]: " << *p++ << endl;		
}