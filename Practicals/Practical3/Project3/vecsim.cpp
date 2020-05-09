#include "vecsim.h"
#include <cmath>
#include <iostream>
using namespace std;

vecsim::vecsim(double* v1, double* v2, int len)
	: vec1(v1), vec2(v2), vec_len(len)
{
}

double vecsim::Euclidean()
{
	// test validity of the given vectors
	if (!vec1 || !vec2 || vec_len <= 0) {
		cout << "invalid vector(s)" << endl;
		return 0.;
	}

	// calculate their Euclidean distance
	double dis = 0.;
	for (int i = 0; i < vec_len; i++) {
		double d = vec1[i] - vec2[i];
		dis += d * d;
	}

	return sqrt(dis);
}

double vecsim::Cosine()
{
	// test validity of the given vectors
	if (!vec1 || !vec2 || vec_len <= 0) {
		cout << "invalid vector(s)" << endl;
		return 0.;
	}

	// calculate their cosine similarity
	double norm1 = 0., norm2 = 0., dot_product = 0.;
	for (int i = 0; i < vec_len; i++) {
		norm1 += vec1[i] * vec1[i];
		norm2 += vec2[i] * vec2[i];
		dot_product += vec1[i] * vec2[i];
	}
	norm1 = sqrt(norm1);
	norm2 = sqrt(norm2);

	if (norm1 <= 0. || norm2 <= 0.) {
		cout << "invalid vector(s)" << endl;
		return 0.;
	}

	return dot_product / (norm1 * norm2);
}
