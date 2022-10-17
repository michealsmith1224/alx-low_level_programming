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
	va_list other_num;
	int b;


	if (separator == NULL)
		return;

	va_start(other_num, n);

	while (i < n)
	{
		b = va_arg(other_num, int);
		printf("%d", b);
		printf("%s", separator);
		i++;
	}
	printf("\n");

}












