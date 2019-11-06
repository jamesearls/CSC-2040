#include <iostream>

using namespace std;

int area(int length, int width)
{
	int area = length * width;
	return area;
}

int main()
{
	int length;
	int width;

	cout << "The area is " << area(7,3) << "\n" << "\n";

	cout << "Enter the Length and Width of the thing:" << endl;
	cin >> length >> width;
	cout << "The area is " << area(length, width) << "\n" << "\n";

	return 0;
}