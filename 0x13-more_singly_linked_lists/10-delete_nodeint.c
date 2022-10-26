#include "lists.h"
/**
  * delete_nodeint_at_index - delete node
  * @head: node start
  * @index: posityion
  * Return: 1 ot -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodelen, *temp, *prevnode;
	size_t count, i;

	nodelen = *head;
	count = 0;
	while (nodelen)
	{
		nodelen = nodelen->next;
		count++;
	}
	if (index > count)
		return (-1);


	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		i = 0;
		temp = *head;
		while (i < index)
		{
			prevnode = temp;
			temp = temp->next;
			i++;
		}
		prevnode->next = temp->next;
		free(temp);
		temp = NULL;
	}

	return (1);
}
