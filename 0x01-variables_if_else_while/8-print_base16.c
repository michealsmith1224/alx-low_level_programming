#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 always (success)
*/

int main(void)
{
	char a;

	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
