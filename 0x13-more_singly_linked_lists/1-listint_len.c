#include "lists.h"

/**
  * listint_len - count nodes
  * @h: para passed
  * Return: 0
*/


size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *temp;

	temp = h;
	count = 0;


	while (temp)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
