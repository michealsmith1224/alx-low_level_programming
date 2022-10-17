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
	if (n != 0)
	{


		unsigned int i;

		va_list others;
		char *b;


		va_start(others, n);

		i = 0;

		while (i < n)
		{
			b = va_arg(others, char *);
			if (b == NULL)
				printf("nil");
			printf("%s", b);

			if (separator != NULL && i != n - 1)
				printf("%s", separator);


			i++;
		}

		printf("\n");
	}
}

