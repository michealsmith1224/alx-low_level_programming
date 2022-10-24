#include "lists.h"

/**
  * list_len - count nodes
  * @h: para passed
  * Return: 0
*/


size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;

		h = h->next;
	}

	return (count);
}
