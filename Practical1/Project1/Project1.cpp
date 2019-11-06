#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	int age;

	cout << "please enter your name" << "\n"; // \n inserts a new line
	getline(cin, name);

	cout << "Hello World!" << "\n" << "\n";
	cout << "Your name is " << name << "\n" << "\n";

	cout << "Please enter your name and age" << endl; //endl inserts a new line and flushes the steram
	cin >> name >> age;

	cout << "Hello World!" << endl;
	cout << "Your name is " << name << endl << "Your age is " << age << endl;
	
	/* Note the differences between getline vs cin >>:
	getline only works on strings while cin >> works for all data types
	getline uses \n or endl as a delimiter while cin >> uses any whitespace as a delimiter*/

	return 0;
}
