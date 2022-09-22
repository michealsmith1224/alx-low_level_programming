#include "main.h"

/**
  * swap_int - swap two integer
  *
  * @a: first para
  * @b: second para
  *
  * Return: 0
*/


void swap_int(int *a, int *b)
{
	int c;
	int d;


	c = *a;
	d = *b;


	*a = d;
	*b = c;
}
