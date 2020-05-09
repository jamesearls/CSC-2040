#include "part_1.h"
#include "Person.h"
#include <iostream>
using namespace std;
int main2()
{
	//test get_mid
	cout << "The mid value of 5, 6 and 7 is: " << get_mid(7, 5, 6) << endl;
	
	//test reverse
	double u = 1.1, v = 2.3, x = 4.7, y = 5.6;
	cout << "u v x y = " << u << " " << v << " " << x << " " << y << endl;
	reverse(u, v, x, y);
	cout << "reversed u v x y = " << u << " " << v << " " << x << " " << y << endl;
	return 0;
}

int main3()
{
	double e = 2.718;
	double* pe = &e;
	*pe = *pe * 3;
	cout << *pe;

	return 0;
}

int main4() 
{
	double pi = 3.1415926;
	double* ptr = &pi;
	cout << *ptr << endl;

	return 0;
}

void fill_and_sum(int* array, int& array_sum,int array_len, int i0)
{
	if (array == NULL || array_len <= 0) {
		cout << "Invalid array" << endl;
		return;
	}

	int* ptr = array;
	for (int i = 0; i < array_len; i++)
	{
		*ptr++ = i0 + i;
	}
		ptr = array; //missing instruction

	for (int i = 0; i < array_len; i++)
		cout << *ptr++ << endl;

	/* missing loop to calculate sum */
	array_sum = 0;
	for (int i = 0; i < array_len; i++)
	{
		array_sum += array[i];
	} 
	
}

int main5() {
	int a[10];
	int s = -1;
	fill_and_sum(a, s, 10, 1);
	cout << "The sum of the array elements is :" << s << endl;
	return 0;
}

int main6()
{
	Person p1("James", "Earls", "0001", 1998);
	cout << "p1 family name: " << p1.get_family_name() << endl;

	Person* p2 = new Person;
	p2->set_ID_number("65536");
	cout << "p2 id number: " << p2->get_ID_number() << endl;
		delete p2;

	Person* p3 = new Person[40];
	for (int i = 0; i < 40; i++) {
		p3[i].set_birth_year(2000);
	}
	cout << "The birth year of p3[39] is: " << p3[39].get_birth_year() << endl;
	delete[] p3;

	return 0;
}

int* getPtrToTen() {
	int* x = new int;
	*x = 10;
	return x;
}
int main()
{
	int* p = 0;
	for (int i = 0; i < 5; i++) {
		p = getPtrToTen();
		cout << *p << endl;
	}
	//delete p;
	return 0;
}

