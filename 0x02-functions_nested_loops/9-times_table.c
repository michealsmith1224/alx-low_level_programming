#include "main.h"
/**
  * times_table - print times table
  *
  * Return: 0
*/

void times_table(void)
{
	int i, j, k;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = i * j;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			else if (k < 10)
			{
				_putchar(' ');
				_putchar('0' + k);
			}
			else
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;

		}
}
