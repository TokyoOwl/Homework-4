#include "person.h"
#include "shape.h"
using namespace std;
int main()
{
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
