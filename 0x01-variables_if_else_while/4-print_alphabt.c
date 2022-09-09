#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (success)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
		{
			continue;
		}
		else if (alpha == 'q')
		{
			continue;
		}
		else
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
