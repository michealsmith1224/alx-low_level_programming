#include "main.h"

/**
  * print_numbers - print numbrs
*/

void print_numbers(void)
{
	char i;
	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}

	_putchar('\n');
}
