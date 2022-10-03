#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
  * check_num - check for digit
  *
  * @str: para 1
  *
  * Return: 1
*/

int check_num(char *str)
{
	unsigned int i;


	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}

	return (1);
}



/**
  * main - adds positive numbers.
  * @argc: para 1
  * @argv: para 2
  *
  * Return: 0
*/


int main(int argc, char *argv[])
{
	int j;
	int str_int;

	int sum = 0;

	j = 1;

	while (j < argc)
	{
		if (check_num(argv[j]))
		{
			str_int = atoi(argv[j]);
			sum += str_int;
		} else
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}

	printf("%d\n", sum);

	return (0);

}
