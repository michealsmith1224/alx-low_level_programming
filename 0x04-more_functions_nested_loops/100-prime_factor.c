#include <stdio.h>
#include <math.h>
#include "main.h"

/**
  * main - prime numbers
  *
  * Return: 0
*/

int main(void)
{
	unsigned int long n = 612852475143, a = (int) sqrt(n);

	while (1)
	{
		if (n % a == 0)
		{
			printf("%lu\n", n / a);
			break;
		}
		a--;
	}

	return (0);
}
