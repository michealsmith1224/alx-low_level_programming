#include "dog.h"
#include <stdio.h>

/**
  * print_dog - output dog details
  * @d: para 1
*/

void print_dog(struct dog *d)
{
	if (d)
	{

	if (!(d->name))
	{
		printf("Name: nill\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}



	printf("Age: %f\n", d->age);

	if (!(d->owner))
	{
		printf("Owner: nill");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

	}

}
