#include "lists.h"

/**
  * free_list - empty list from stack
  * @head: para passed
*/



void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head))
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
