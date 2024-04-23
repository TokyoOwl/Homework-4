#include "person.h"
Person::Person(string name, string second_name, int age)
	{
		this->name = name;
		this->second_name = second_name;
		this->age = age;
	}
	void Person::display_info(int a)
	{
		cout << name << endl;
	}
	void Person::display_info(int a, int b)
	{
		cout << name << " " << second_name << endl;
	}
  void Person::display_info(int a, int b, int c)
	{
		cout << name << " " << age << endl;
	}
  void Person::display_info(int a, int b, int c, int d)
	{
		cout << name << " " << second_name << " " << age << endl;
	}
