#include "lists.h"


/**
  * print_list - print list
  * @h: para passed
  * Return: 0
*/


size_t print_list(list_t *h)
{
	list_t *temp;
	size_t count;

	temp = h;

	count = 0;


	while (temp->next != NULL)
	{
		if (temp->str == NULL)
		{
			temp->str = "(nil)";
			temp->len = 0;
		}
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}

	printf("[%d] %s\n", temp->len, temp->str);
	count++;


	return (count);

}
