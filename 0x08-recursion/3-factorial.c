#include "main.h"

/**
  * factorial - solve factorial
  * @n: para
  *
  * Return: 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}else if (n == 0)
	{
		return (1);
	}else
	{
		return (n * factorial(n - 1));
	}
}

