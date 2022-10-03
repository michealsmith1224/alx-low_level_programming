#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers.
  *
  * @argc: para 1
  * @argv: para 2
  *
  * Return: 1
*/


int main(int argc, char *argv[])
{
	int a, b;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);


		printf("%d\n", a * b);

		return (0);
	}
	printf("Error\n");
	return (1);
}
