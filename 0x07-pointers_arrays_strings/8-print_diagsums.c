#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - sum diag
  * @a: the array
  * @size: the size
*/

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i, m, n;

	for (i = 0; i < size; i++)
	{
		m = (i * size) + i;
		sum1 += *(a + m);
	}

	for ( i = 0; i < size; i++)
	{
		n = (i * size) + (size - 1 - i);
		sum2 += *(a + n);
	}

	printf("%d, %d", sum1, sum2);
}

