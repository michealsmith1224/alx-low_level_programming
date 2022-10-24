#include "lists.h"

/**
  * add_node - add to the end
  * @head: begining of node
  * @str: para passed
  * Return: 0
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (0);

	newnode->str = strdup(str);


	if (head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		newnode->next = NULL;
		temp->next = newnode;
	}

	return (*head);
}



