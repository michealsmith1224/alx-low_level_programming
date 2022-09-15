#include <stdio.h>
#include <stdlib.h>

/**
  * main - main block
  *
  * Return: 0
*/

int main(void)
{
	int i, add;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			add += i;
		}
	}
	printf("%d\n", add);
	return (0);
}

