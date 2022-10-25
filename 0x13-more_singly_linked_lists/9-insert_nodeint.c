#include "lists.h"

/**
  * insert_nodeint_at_index - insert node at given position
  * @head: start node
  * @idx: position to inser
  * @n: n value
  * Return: 0
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *nodelen, *newnode;
	unsigned int count, i;

	nodelen = *head;
	count = 0;
	while (nodelen)
	{
		nodelen = nodelen->next;
		count++;
	}

	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		newnode = (listint_t *)malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		temp = *head;
		i = 1;
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (*head);
}

