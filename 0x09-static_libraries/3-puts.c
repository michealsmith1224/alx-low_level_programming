#include "main.h"
#include <string.h>

/**
  * _puts - put output
  *
  * @s: para
  * Return: 0
*/

void _puts(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}

}
