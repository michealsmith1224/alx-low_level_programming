#include <stdio.h>
/**
  * main - Entry Point
  *
  *Return: 0 always (success)
*/

int main(void)
{
	int d1 = 48;
	int d2;
	int d3;
	int d4 = 44;

	while (d1 <= 57)
	{
		d2 = d1 + 1;
		while (d2 <= 57)
		{
			d3 = d2 + 1;
			while (d3 <= 57)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);
				if (d1 != 55 || d2 != 56 || d3 != 57)
				{
					putchar(d4);
					putchar(32);
				}
				d3++;
			}
			d2++;
		}
		d1++;
	}

	putchar('\n');
	return (0);
}
