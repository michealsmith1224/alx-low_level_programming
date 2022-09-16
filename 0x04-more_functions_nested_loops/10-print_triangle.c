#include "main.h"

/**
  * print_triangle - check for a digit
  *
  * @size: integer type
  *
  * Return: 0
*/

void print_triangle(int size)
{
	int i = 1, cc;

	while (i <= size && size > 0)
	{
		cc = 0;

		while (cc < size - i)
		{
			_putchar(' ');
			cc++;
		}
		cc = 0;

		while (cc < i)
		{
			_putchar('#');
			cc++;
		}

		_putchar('\n');
		i++;
	}

	if (i == 1)
		_putchar('\n');
}
