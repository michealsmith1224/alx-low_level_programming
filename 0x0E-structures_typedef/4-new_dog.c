#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * new_dog - new dog details
  * @name: the name
  * @age: the age
  * @owner: owners name
*/



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(struct dog));

	if (ptr == NULL)
		return (NULL);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}

