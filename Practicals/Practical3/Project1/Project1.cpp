#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main(){

	//Q2
		Person p1("James", "Earls", "01454", 1998);
		p1.get_birth_year();
		cout << "p1: " << p1 << endl;
	
	//Q3
		Person p2;
		p2.set_family_name("Smith");
		cout << "p2: " << p2 << endl;

	//Q4
		Person* p3 = new Person("Joan", "O'Grady", "2345", 1993);
		cout << "p3: " << p3->get_ID_number() << endl;
		delete p3;
	
	//Q5
		Person* p4 = new Person;
		p4->set_birth_year(1976);
		cout << "Birth year: " << p4->get_birth_year() << endl;
		delete p4;
	//Q6 
		Person* person_array = new Person[385];
		person_array[13].set_given_name("John");
		cout << "p13: " << person_array[13].get_given_name() << endl;
		delete[] person_array;

		
		

		return 0;
}