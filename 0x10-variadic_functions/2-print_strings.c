#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
  * print_strings - print strings
  * @separator: para 1
  * @n: para 2
*/


void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list others;
	char *b;

	if (separator == NULL)
		return;

	va_start(others, n);

	i = 0;

	while (i < n)
	{
		b = va_arg(others, char *);

		if (b == NULL)
			printf("nil");

		printf("%s", b);

		if (i == n - 1)
			break;
		printf("%s", separator);

		i++;
	}

	printf("\n");
}

