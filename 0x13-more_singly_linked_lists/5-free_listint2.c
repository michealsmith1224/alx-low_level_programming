#include "lists.h"


/**
  * free_listint2 - free nodes
  * @head: node head
*/



void free_listint2(listint_t **head)
{
	listint_t *temp;


	temp = *head;

	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
