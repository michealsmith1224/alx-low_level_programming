#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - concatinate string
  * @s1: string 1
  * @s2: string 2
  * Return: 0
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len, len1, i, total, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	len1 = 0;
	while (s2[len1] != '\0')
	{
		len1++;
	}
	total = len + len1;
	ptr = (char *)malloc((total * sizeof(char)) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	k = 0;
	while (i <= total)
	{
		ptr[i] = s2[k];
		i++;
		k++;
	}
	return (ptr);
}
