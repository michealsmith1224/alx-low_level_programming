#include <stdio.h>
#include <stdlib.h>

/**
  * main - Minimal Number of Coins for Change
  *
  * @argc: para 1
  * @argv: para 2
  *
  * Return: 0
*/


int main(int argc, char *argv[])
{
	int position, str_to_int, change, aux;

	int coins[] = {25, 10, 5, 2, 1};

	position = 0;
	str_to_int = 0;
	change = 0;
	aux = 0;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	str_to_int = atoi(argv[1]);

	if (str_to_int <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[position] != '\0')
	{
		if (str_to_int >= coins[position])
		{
			aux = (str_to_int / coins[position]);
			change += aux;
			str_to_int -= coins[position]  * aux;
		}
		position++;
	}

	printf("%d\n", change);

	return (0);

}
