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

		va_start(other_num, n);

		for (i = 0; i < n; i++)
		{
			b = va_arg(other_num, int);
			printf("%d", b);

			if (separator != NULL && i < n - 1)
				printf("%s ", separator);
		}
		printf("\n");

		va_end(other_num);


}

