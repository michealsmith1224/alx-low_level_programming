#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0
*/

int main(void)
{
	int d1 = 48;
	int d2;
	int d3 = 44;

	while (d1 <= 57)
	{
		d2 = d1 + 1;
		while (d2 <= 57)
		{
			putchar(d1);
			putchar(d2);
			if (d1 != 56 || d2 != 57)
			{
				putchar(d3);
				putchar(32);
			}

			d2++;
		}
		d1++;
	}


	putchar('\n');
	return (0);
}
