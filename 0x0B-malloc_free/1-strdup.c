#include "main.h"
#include <string.h>
#include <stdlib.h>



/**
  * _strdup - dupicate string
  * @str: para1
  * Return: 0
*/

char *_strdup(char *str)
{
	char *ptr;
	int i;

	int len = strlen(str);

	ptr = (char *)malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}


	return (ptr);
}


















