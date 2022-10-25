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


	temp = *head;


	if (temp == NULL)
	{

		return (0);
	}
	else
	{


		*head = temp->next;
		n = temp->n;
		free(temp);
	}
		return (n);

}


