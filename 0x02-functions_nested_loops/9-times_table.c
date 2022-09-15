#include "main.h"
/**
  * times_table - print times table
  *
  * Return: 0
*/

void times_table(void)
{
	int i, j, k;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 0)
			{
				_putchar('0');
			}
			else if (k >= 10)
			{
				_putchar(((k / 10) + 48));
				_putchar(((k % 10) + 48));
			}
			else if ((k < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');

	}
}
