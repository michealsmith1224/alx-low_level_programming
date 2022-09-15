#include "main.h"

/**
  * print_times_table - prints times table
  *
  * @n: number to use
  *
  * Return 0
*/

void print_times_table(int n)
{
	int a = 0, res, b;

	if (n < 0 || n > 15)
	{
		return;
	}
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			res = a * b;
			if (b == 0)
			{
				_putchar('0' + res);
			}
			else if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			}
			else if (res < 100)
			{
				_putchar(' ');
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			else
			{
				_putchar('0' + res / 100);
				_putchar('0' + (res - 100) / 10);
				_putchar('0' + res % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			
			}
		}
		_putchar('\n');
		a++;

	}
}

