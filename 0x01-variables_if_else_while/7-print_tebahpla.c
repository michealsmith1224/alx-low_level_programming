#include <stdio.h>
/**
  * main - Entery Point
  *
  * Return: 0 Always (success)
*/

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
