#include <iostream>
using namespace std;
class Person
{
	string name;
	int age;
	string second_name;
public:
	Person(string name, string second_name, int age);
	void display_info(int a);
	void display_info(int a, int b);
	void display_info(int a, int b, int c);
	void display_info(int a, int b, int c, int d);
};
