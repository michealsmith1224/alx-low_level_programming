#include "main.h"
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
	int len;

	if (str == NULL)
	{
		return (NULL);
	}


	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	ptr = (char *)malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);


	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}

	ptr[len] = '\0';


	return (ptr);
}


















