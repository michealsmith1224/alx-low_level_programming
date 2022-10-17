#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>


/**
  * print_numbers - output numbers
  * @separator: to seperate num
  * @n: cont number
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int b;
	va_list other_num;


	if (separator == NULL || n == 0)
		return;


	i = 0;

	va_start(other_num, n);

	while (i < n)
	{
		b = va_arg(other_num, int);
		printf("%d", b);

		if (i == n - 1)
			break;

		printf("%s ", separator);

		i++;
	}
	va_end(other_num);

	printf("\n");
}



