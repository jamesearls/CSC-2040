// Project 1 test
#include "my_functions.h"
#include <iostream>

using namespace std;

int main()
{
	// 1. most_least_diff
	most_least_diff(-31.0, 45.3, 16.8);

	// 2. admission
	int credits = 7;
	int num_admissions = 0;
	while(admission(credits)) num_admissions++;
	cout << "number of admissions " << num_admissions << endl;
	cout << "credit points left " << credits << endl;

	return 0;
}
