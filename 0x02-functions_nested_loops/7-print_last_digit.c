#include "main.h"
/**
  * print_last_digit - Entry point
  *
  * @n: number tested
  *
  *Return: 0
*/

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
