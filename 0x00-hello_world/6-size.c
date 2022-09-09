#include <stdio.h>
/**
 *
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


	printf("size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longerType));
	printf("Size of an float: %zu byte(s)\n", sizeof(floatType));

	return (0);



}
