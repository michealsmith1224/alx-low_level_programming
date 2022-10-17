#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum all int
  *
  * @n: value passed
  * Return: 0
*/


int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	va_list other_num;


	if (n == 0)
		return (0);

	sum = 0;
	i = 0;

	va_start(other_num,n);

	while (i < n)
	{
		sum += va_arg(other_num, int);
		i++;
	}

	return (sum);
}



