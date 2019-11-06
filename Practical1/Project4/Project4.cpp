#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int random = rand()%9;
	int guess;
	cout << random << endl;

	for (int i=1; i<=3; i++)
	{
		cout << "You have " << i << " guesses left \n" << "Guess the Random number:" << endl;
		cin >> guess;
	}
	return 0;
}


