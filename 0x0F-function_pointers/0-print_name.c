#include "function_pointers.h"


/**
  * print_name - print name
  * @name: the name passed
  * @f: function passed
*/


void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);

}
