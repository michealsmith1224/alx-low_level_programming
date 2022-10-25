#include "lists.h"


/**
  * get_nodeint_at_index - get node at index
  * @head: node start
  * @index: the node start
  * Return: 0
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *nodelen;

	unsigned int count, i;


	nodelen = head;
	count = 0;
	while (nodelen)
	{
		nodelen = nodelen->next;
		count++;
	}


	if (index > count)
	{
		return (NULL);
	}
	else
	{
		temp = head;
		i = 0;
		while (i < index)
		{
			temp = temp->next;
			i++;
		}
	}

	return (temp);
}
