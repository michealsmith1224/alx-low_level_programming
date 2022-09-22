#include "main.h"
#include <string.h>

/**
  * print_rev - reverse
  *
  * @s: para
  *
  * Return: 0
*/


void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
	{
		_putchar(*(s + length));
	}
	_putchar('\n');
}
