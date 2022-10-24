#include "lists.h"


/**
  * print_listint - print nodes
  * @h: para passed
  *
  * Return: 0
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	count = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
