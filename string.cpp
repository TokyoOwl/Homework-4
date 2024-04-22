#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
class String {
	char* str;
	size_t size;
public:
	String(const char* c_str)
	{
		size = strlen(c_str);
		str = new char[size + 1];
		for (int i = 0; i < size; i++)
			str[i] = c_str[i];
		str[size] = '\0';
	}
	String(size_t count, char ch)
	{
		size = count;
		str = new char[size + 1];
		for (size_t i = 0; i < count; ++i) {
			str[i] = ch;
		}
		str[size] = '\0';
	}
	~String() {
		size = 0;
		delete[] str;
	}
	size_t getSize()
	{
		cout << "String lenght: ";
		return size;
	}
	const char* getCString() {
		cout << "String contains: ";
		return str;
	}
	void append(const char* otherstr)
	{
		char* resstr = new char[strlen(str)];
		strcpy(resstr, str);
		delete[] str;
		str = new char[strlen(resstr) + strlen(otherstr) + 1];
		for (size_t i = 0; i < strlen(resstr); i++)
			str[i] = resstr[i];
		for (size_t j = strlen(resstr); j < strlen(resstr) + strlen(otherstr); j++)
			str[j] = otherstr[j - strlen(resstr)];
		str[strlen(resstr) + strlen(otherstr)] = '\0';
	}
	String concat(const String& otherString)
	{
		char* resultstr = new char[strlen(str) + strlen(otherString.str) + 1];
		for (size_t i = 0; i < strlen(str); i++)
			resultstr[i] = str[i];
		for (size_t j = strlen(str); j < strlen(str) + strlen(otherString.str); j++)
			resultstr[j] = otherString.str[j - strlen(str)];
		resultstr[strlen(str) + strlen(otherString.str)] = '\0';
		return resultstr;
	}
	int compare(const String& otherString)
	{
		return strcmp(str, otherString.str);
	}
	void toUpper()
	{
		for (int i = 0; i < strlen(str); i++)
			str[i] = toupper(str[i]);
	}
	void toLower()
	{
		for (int i = 0; i < strlen(str); i++)
			str[i] = tolower(str[i]);
	}
	String(const String &c_str) //конструктор копирования
	{
		size = c_str.size;
		str = new char[size + 1];
		for (int i = 0; i < size; i++)
			str[i] = c_str.str[i];
		str[size] = '\0';
	}
	String& operator=(const String &c_str) //оператор присваивания
	{
		size = c_str.size;
		str = new char[size + 1];
		for (int i = 0; i < size; i++)
			str[i] = c_str.str[i];
		str[size] = '\0';
	}
	void print_data(int data)
	{
		cout << data << endl;
	}
	void print_data(double data)
	{
		cout << data << endl;
	}
	void print_data(string data)
	{
		cout << data << endl;
	}
};
class Person
{
	string name;
	int age;
	string second_name;
public:
	Person(string name, string second_name, int age)
	{
		this->name = name;
		this->second_name = second_name;
		this->age = age;
	}
	void display_info(int a)
	{
		cout << name << endl;
	}
	void display_info(int a, int b)
	{
		cout << name << " " << second_name << endl;
	}
	void display_info(int a, int b, int c)
	{
		cout << name << " " << age << endl;
	}
	void display_info(int a, int b, int c, int d)
	{
		cout << name << " " << second_name << " " << age << endl;
	}
};
int main() {
	/*Homework-4
	===============================================
	const char* c_str = "Hello ";
	const char* newstr = "World!";
	String mystring(c_str);
	cout << mystring.getCString() << endl;
	cout << mystring.getSize() << endl;
	mystring.append(newstr);
	cout << mystring.getCString() << endl;
	String hellostr("hello");
	String worldstr("world");
	String combined = hellostr.concat(worldstr);
	cout << combined.getCString() << endl;
	String one("slovo");
	String two("sLoVo");
	cout << "String1: " << one.getCString() << endl;
	cout << "String2: " << two.getCString() << endl;
	if(one.compare(two) == 0)
		cout << "Strings are equal\n";
	else if(one.compare(two) > 0)
		cout << "String1 bigger than String2\n";
	else
		cout << "String2 bigger than String1\n";
	one.compare(two);
	two.toUpper();
	cout << "Uppered string: " << two.getCString() << endl;
	one.toLower();
	cout << "Lowered string: "<<one.getCString() << endl;
	String onechar(10, '9');
	cout << onechar.getCString() << endl;
	cout << onechar.getSize() << endl;
	===============================================
	*/
	//Homework-5
	String str1("Tomas");
	String str2 = str1;
	cout << str1.getCString() << endl << str2.getCString() << endl;
	String hellostr("hello");
	String worldstr("world");
	worldstr = hellostr;
	cout << hellostr.getCString() << endl << worldstr.getCString() << endl;
	Person Mike("Mike", "Vazovsky", 29);
	Mike.display_info(1);
	Mike.display_info(1, 2);
	Mike.display_info(1, 2, 3);
	Mike.display_info(1, 2, 3, 4);
	return 0;
}
