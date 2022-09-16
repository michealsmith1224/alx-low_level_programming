#include "main.h"

/**
  * print_number - prints numbers
  *
  * @n: number to be printed
*/

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar('-');
		k = -k;
	}

	if (k > 9)
	{
		print_number(k / 10);
	}

	_putchar(k % 10 + '0');
}


