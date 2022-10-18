#include "main.h"

/**
  * _memcpy - copies memory
  * @dest: para 1
  * @src: para 2
  * @n: size
  * Return: 0
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[1];
	}
	return (dest);
}
