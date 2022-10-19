#include "main.h"
#include <string.h>
#include <stddef.h>

/**
  * _strchr - Write a function that locates a character in a string.
  * @s: the string
  * @c: the character
  * Return: 0
*/


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}

	return (NULL);

}
