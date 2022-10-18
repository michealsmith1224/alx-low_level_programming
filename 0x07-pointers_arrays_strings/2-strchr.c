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
	int i;

	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (c == s[i])
		{
			return (s + i);
		}
	}


	return (NULL);

}
