#include "function_pointers.h"

/**
  * int_index - check int
  * @array: para 1
  * @size: para 2
  * @cmp: para 2
  * Return: 0
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;


	res  = -1;
	if (array && cmp)
	{
		if (size <= 0)
			return (res);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (res);
}



