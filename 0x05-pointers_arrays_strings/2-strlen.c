#include "main.h"
#include <string.h>

/**
  *  _strlen - check the length of the string
  * @s: paramert taken
  *
  * Return: 0
*/


int _strlen(char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}

	return (i);
}
