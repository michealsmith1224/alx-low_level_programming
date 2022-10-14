#include "3-calc.h"

/**
  * op_add - add intwgers
  * @a: int
  * @b: int
  * Return: 0
*/


int op_add(int a, int b)
{
	return (a + b);
}


/**
  4   * op_sub - sub intwgers
  5   * @a: int
  6   * @b: int
  7   * Return: 0
  8 */


int op_sub(int a, int b)
{
	return (a - b);
}



/**
  4   * op_mul - mul intwgers
  5   * @a: int
  6   * @b: int
  7   * Return: 0
  8 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
  4   * op_div - divide intgers
  5   * @a: int
  6   * @b: int
  7   * Return: 0
  8 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
  4   * op_mod - mod intgers
  5   * @a: int
  6   * @b: int
  7   * Return: 0
  8 */


int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

















