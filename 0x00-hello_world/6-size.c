#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
*/

int main(void)
{
	char charType;
	int intType;
	long longType;
	long long longerType;
	float floatType;


	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n",  (unsigned long)sizeof(longType));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longerType));
	printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(floatType));

	return (0);



}
