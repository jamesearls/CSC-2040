#include <iostream>;
using namespace std;

int main()
{

	int x = 10;
	int* p = NULL;

	p = &x;

	cout << *p << endl;
}