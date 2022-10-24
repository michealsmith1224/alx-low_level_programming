#include "lists.h"


/**
  * print_list - print list
  * @h: para passed
  * Return: 0
*/


size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;


	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		count++;
	}


	return (count);

}
