#include "string.h"
String::String(const char* c_str)
{
	size = strlen(c_str);
	str = new char[size + 1];
	for (int i = 0; i < size; i++)
		str[i] = c_str[i];
	str[size] = '\0';
}
String::String(size_t count, char ch)
{
	size = count;
	str = new char[size + 1];
	for (size_t i = 0; i < count; ++i)
	{
		str[i] = ch;
	}
	str[size] = '\0';
}
String::~String() 
{
	size = 0;
	delete[] str;
}
size_t String::getSize()
{
	cout << "String lenght: ";
	return size;
}
const char* String::getCString()
{
	cout << "String contains: ";
	return str;
}
void String::append(const char* otherstr)
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
String String::concat(const String& otherString)
	{
		char* resultstr = new char[strlen(str) + strlen(otherString.str) + 1];
		for (size_t i = 0; i < strlen(str); i++)
			resultstr[i] = str[i];
		for (size_t j = strlen(str); j < strlen(str) + strlen(otherString.str); j++)
			resultstr[j] = otherString.str[j - strlen(str)];
		resultstr[strlen(str) + strlen(otherString.str)] = '\0';
		return resultstr;
	}
	int String::compare(const String& otherString)
	{
		return strcmp(str, otherString.str);
	}
	void String::toUpper()
	{
		for (int i = 0; i < strlen(str); i++)
			str[i] = toupper(str[i]);
	}
	void String::toLower()
	{
		for (int i = 0; i < strlen(str); i++)
			str[i] = tolower(str[i]);
	}
	String::String(const String &c_str) //конструктор копирования
	{
		size = c_str.size;
		str = new char[size + 1];
		for (int i = 0; i < size; i++)
			str[i] = c_str.str[i];
		str[size] = '\0';
	}
	String& String::operator=(const String &c_str) //оператор присваивания
	{
		if(&c_str == *this)
			return *this;
		size = c_str.size;
		delete[] str;
		str = new char[size + 1];
		for (int i = 0; i < size; i++)
			str[i] = c_str.str[i];
		str[size] = '\0';
		return *this;
	}
	void String::print_data(int data)
	{
		cout << data << endl;
	}
	void String::print_data(double data)
	{
		cout << data << endl;
	}
	void String::print_data(string data)
	{
		cout << data << endl;
	}
