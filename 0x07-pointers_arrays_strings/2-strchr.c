#include "main.h"
#include <string.h>

/**
  * _strchr - Write a function that locates a character in a string.
  * @s: the string
  * @c: the character
  * Return: 0
*/


char *_strchr(char *s, char c)
{
	if (s == NULL)
		return NULL;
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return NULL;

}
