#ifndef _DOG_H
#define _DOG_H

/**
  * struct dog - structure for dog
  * @name: dog's name
  * @age: dog's age
  * @owner: the owner
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
