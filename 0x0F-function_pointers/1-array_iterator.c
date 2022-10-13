#include "function_pointers.h"

/**
  * array_iterator - perform action
  * @array: para 1
  * @size_t_size: para 2
  * @action: functio passed
*/


void array_iterator(int *array, int size_t_size, void (*action)(int))
{
	int i;


	i = 0;
	while (i < size_t_size)
	{
		action(array[i]);

		i++;
	}

}
