#include <stdio.h>
#include "main.h"


/**
  * puts2 - prints every other character
  * @str: string
  *
  * Return: nothing
*/




void puts2(char *str)
{
	int i = 0;

	/*while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	*/
	for (i = 0; str[i] != '\0'; i = i+2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
