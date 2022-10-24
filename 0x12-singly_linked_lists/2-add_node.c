#include "lists.h"

/**
  * add_node - add at the begining
  * @head: begining of node
  * @str: para passed
  * Return: 0
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (0);

	newnode->str = strdup(str);
	newnode->len = strlen(str);


	if (head ==  NULL)
	{
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
	}

	*head = newnode;


	return (0);
}

