// Project 1
#include "my_functions.h"
#include <iostream>

using namespace std;

// 1.
void most_least_diff(double a, double b, double c)
{
	// any solution that generates correct answers may be credited
	// the following solution is one example
	double diff_ab = fabs(a - b), diff_ac = fabs(a - c), diff_bc = fabs(b - c);

	double max_diff = diff_ab;
	double max_diff_num1 = a, max_diff_num2 = b;
	if (diff_ac > max_diff) {
		max_diff = diff_ac;
		max_diff_num1 = a, max_diff_num2 = c;
	}
	if (diff_bc > max_diff) {
		max_diff = diff_bc;
		max_diff_num1 = b, max_diff_num2 = c;
	}

	double min_diff = diff_ab;
	double min_diff_num1 = a, min_diff_num2 = b;
	if (diff_ac < min_diff) {
		min_diff = diff_ac;
		min_diff_num1 = a, min_diff_num2 = c;
	}
	if (diff_bc < min_diff) {
		min_diff = diff_bc;
		min_diff_num1 = b, min_diff_num2 = c;
	}

	cout << "Most different: " << max_diff_num1 << " " << max_diff_num2 << " with difference = " << max_diff << endl;
	cout << "Least different: " << min_diff_num1 << " " << min_diff_num2 << " with difference = " << min_diff << endl;
}

// 2.
bool admission(int& credit) {
	if (credit < 3) return false;
	credit -= 3;
	return true;
}
