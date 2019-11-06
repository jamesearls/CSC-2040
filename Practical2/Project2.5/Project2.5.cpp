#include <iostream>;
using namespace std;

double* ptr_to_cube_of(double x)
{
	double cube = x * x * x;
	return &cube;
}

int main()
{
	double* px3 = ptr_to_cube_of(3.0);
	cout << *px3 << endl;

}