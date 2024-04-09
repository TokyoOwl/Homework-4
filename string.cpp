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
		int i = 0;
		for (; i < size; i++)
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
	void compare(const String& otherString)
	{
		if(strcmp(str, otherString.str) == 0)
			cout << "Strings are equal\n";
		else if(strcmp(str, otherString.str) > 0)
			cout << "String1 bigger than String2\n";
		else
			cout << "String2 bigger than String1\n";
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
};
void main() {
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
	one.compare(two);
	two.toUpper();
	cout << "Uppered string: " << two.getCString() << endl;
	one.toLower();
	cout << "Lowered string: "<<one.getCString() << endl;
	String onechar(10, '9');
	cout << onechar.getCString() << endl;
	cout << onechar.getSize() << endl;
}
