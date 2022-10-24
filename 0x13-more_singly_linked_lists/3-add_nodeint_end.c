#include "lists.h"

/**
  * add_nodeint_end - add to the end
  * @head: node head
  * @n: val passed
  * Return: 0
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (0);


	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newnode;
	}

	return (*head);
}
