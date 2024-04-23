#include "person.h"
#include "shape.h"
#include "string.h"
using namespace std;
int main()
{
	String str1("Tomas");
	String str2 = str1;
	cout << str1.getCString() << endl << str2.getCString() << endl;
	String hellostr("hello");
	String worldstr("world");
	worldstr = hellostr;
	cout << hellostr.getCString() << endl << worldstr.getCString() << endl;
	Circle a(5);
	a.print_area();
  	Rectangle b(2, 4);
  	b.print_area();
  	Triangle c(4, 10);
  	c.print_area();
  	Person Mike("Mike", "Vazovsky", 29);
	Mike.display_info(1);
	Mike.display_info(1, 2);
	Mike.display_info(1, 2, 3);
	Mike.display_info(1, 2, 3, 4);
	return 0;
}
