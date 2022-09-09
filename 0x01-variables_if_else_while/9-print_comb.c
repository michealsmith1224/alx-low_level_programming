#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0 always 9success)
*/

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar((a % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
