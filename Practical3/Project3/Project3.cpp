#include "vecsim.h"
#include <iostream>
using namespace std;
int main() {
	// create two vectors of the same length
	int len = 10;
	double* vector1 = new double[len];
	double* vector2 = new double[len];
	// fill in the two vectors with random values, for example:
	for (int n = 0; n < len; n++)
		vector1[n] = rand() % 10;
	for (int n = 0; n < len; n++)
		vector2[n] = 3 * vector1[n];
	// create an object vs of the class vecsim:
	vecsim vs(vector1, vector2, len);
	// calculate the similarity between the two vectors
	cout << "Euclidean dis = " << vs.Euclidean() << endl;
	cout << "Cosine sim = " << vs.Cosine() << endl;
	// free the spaces allocated by new
	delete[] vector1;
	delete[] vector2;}