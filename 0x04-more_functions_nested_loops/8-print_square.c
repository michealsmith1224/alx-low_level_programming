#include "main.h"

/**
  * print_square - print square
  *
  * Return: 0
*/

void print_square(int size)
{
	int i = 0, cc;

	while (i < size && size > 0)
	{
		cc = 0;

		while (cc < size)
		{
			_putchar('#');
			cc++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
