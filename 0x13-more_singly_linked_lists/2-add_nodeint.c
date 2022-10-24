#include "lists.h"

/**
  * add_nodeint - add at the beninning
  * @head: start node
  * @n: val added
  * Return: 0
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (0);

	newnode->n = n;


	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
	}

	*head = newnode;

	return (*head);
}
