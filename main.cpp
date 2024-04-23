#include "person.h"
using namespace std;
int main()
{
  Person Mike("Mike", "Vazovsky", 29);
	Mike.display_info(1);
	Mike.display_info(1, 2);
	Mike.display_info(1, 2, 3);
	Mike.display_info(1, 2, 3, 4);
	return 0;
}
