#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
class String {
	char* str;
	size_t size;
public:
	String(const char* c_str);
	String(size_t count, char ch);
	~String();
	size_t getSize();
	const char* getCString();
	void append(const char* otherstr);
	String concat(const String& otherString);
	int compare(const String& otherString);
	void toUpper();
	void toLower();
	String(const String &c_str); //конструктор копирования
	String& operator=(const String &c_str);//оператор присваивания
	void print_data(int data);
	void print_data(double data);
	void print_data(string data);
};
