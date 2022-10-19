#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * _strspn - check the code
 *
 * @s: string passed
 * @accept: char to check
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int int_len;

	int_len = 0;

	while (*s && strchr(accept, *s++))
			int_len++;

	return (int_len);
}




