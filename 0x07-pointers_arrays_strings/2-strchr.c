#include "main.h"
#include <stddef.h>
/**
  * _strchr - Write a function that locates a character in a string.
  * @s: the string
  * @c: the character
  * Return: 0
*/


char *_strchr(char *s, char c)
{
	int a = 0, b;


	if (s == NULL)
		return (NULL);

	while (s[a])
		a++;

	for (b = 0; b < a; b++)
	{
		if (c == s[b])
		{
			return (s + b);
		}
	}


	return ('\0');

}
