#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (success)
*/

int main(void)
{
	int a,b,c,d;

	for (a = 48; a < 58; a++)
	{
		for ( b = 48; b < 58; b++)
		{
			c = b + 1;
			d = a;
			for ( ; d < 58; d++)
			{
				for (; d < 58; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if ( a != 57 || d != 57 || b != 57 || c != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d =48;
			}
		}
	}
	putchar('\n');
	return (0);
}

