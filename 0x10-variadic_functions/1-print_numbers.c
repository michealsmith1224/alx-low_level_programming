#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - output numbers
  * @separator: to seperate num
  * @n: cont number
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{


		unsigned int i;
		va_list other_num;

		va_start(other_num, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(other_num, int));

			if (i < n - 1 && separator != NULL)
				printf("%s ", separator);
		}
		printf("\n");

		va_end(other_num);

}

