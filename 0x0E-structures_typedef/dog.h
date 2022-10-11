#ifndef _DOG_H
#define _DOG_H

/**
  * struct dog - structure for dog
  * @name: dog's name
  * @age: dog's age
  * @owner: the owner
*/

struct dog
{
	char *name;
	double age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
