#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello";
    	char *f;

	f = _strchr(s, 'm');

	if (f == NULL)
	{
		printf("error\n");
	}

	printf("%s\n", f);
	return (0);
}
