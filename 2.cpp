#include<iostream>

using namespace std;

struct PERSON
{
	char name [20];
	int age;
	int grade;
};

typedef struct PERSON HUMAN;

int main()
{
	HUMAN person;

	cout << "Name : ";
	cin >> person.name;
	
	cout << "Age : ";
	cin >> person.age;

	cout << "Grade : ";
	cin >> person.grade;


	cout << endl;

	cout << "Your Name is : "<< person.name << endl;

	cout << "Your Age is : " << person.age << endl;

	cout << "Your Grade is : " << person.grade << endl;

	cout << endl;

	return 0;
}