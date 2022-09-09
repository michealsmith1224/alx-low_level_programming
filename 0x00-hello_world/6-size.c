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
	float floatTyp;


	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n",  sizeof(longType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longerType));
	printf("Size of an float: %lu byte(s)\n", sizeof(floatTyp));

	return (0);



}
