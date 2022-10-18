#include "main.h"

/**
  * _memset - fill constant
  * @s: para 1
  * @b: para 2
  * @n: para 3
  * Return: 0
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
