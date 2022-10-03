#include <stdio.h>

/**
  * main - prints all arguments it receives
  *
  * @argc: para 1
  * @argv: para 2
  *
  * Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;


	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
