#include <stdio.h>
#include <stdlib.h>
/**
  * main - print opcode
  * @argc: para 1
  * @argv: para 2
  * Return: 0
*/


int main(int argc, char *argv[])
{
	int i, byte;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}



	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
		printf("%02hhx", *((char *)main + i));

		if (i < byte - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}


	}



	return (0);
}

