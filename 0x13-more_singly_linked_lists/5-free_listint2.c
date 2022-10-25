#include "lists.h"


/**
  * free_listint2 - free nodes
  * @head: node head
*/



void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;



	while (*head)
	{
		*head = (*head)->next;
		free(temp);
		temp = *head;
	}

	*head = NULL;
}
