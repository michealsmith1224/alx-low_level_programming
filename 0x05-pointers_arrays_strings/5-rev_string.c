#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * rev_string - reverse a string
  * @s: string
  * Return: Always 0
*/


void rev_string(char *s)
{
	int len, i;
	char temp;

	len = strlen(s);


	for (i = 0; i < len / 2;  i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}


}

