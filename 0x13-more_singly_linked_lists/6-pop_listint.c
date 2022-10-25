#include "lists.h"

/**
  * pop_listint - remove head node
  * @head: head node
  * Return: 0
*/


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;


	if (*head == NULL)
		return (0);

	temp = *head;
	n =(*head)->n;
	*head = (*head)->next;
	free(temp);


	return (n);
}


