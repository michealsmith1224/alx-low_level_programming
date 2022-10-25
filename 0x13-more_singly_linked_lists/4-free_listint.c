#include "lists.h"

/**
  * free_listint - free list
  * @head: node start
*/



void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
