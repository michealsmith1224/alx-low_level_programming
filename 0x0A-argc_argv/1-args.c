#include <stdio.h>

/**
  * main - Silence is argument carried out by other means mandatory
  *
  * @argc: para 1
  * @argv: para 2
  *
  * Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc == 1)
	{
		printf("0\n");
	} else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
