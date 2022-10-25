#include "lists.h"


/**
  * sum_listint - sum all the int
  * @head: start node
  * Return: 0
*/



int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;


	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp = head;
		sum = 0;
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}

	}

	return (sum);
}
