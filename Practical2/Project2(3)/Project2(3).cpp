#include <iostream>;
using namespace std;

int main()
{
	int array[10];
	int* p2 = array;
	for (int i = 0; i < 10; i++)* p2++ = i * i;
}