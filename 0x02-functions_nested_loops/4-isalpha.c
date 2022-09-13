#include "main.h"
/**
  * _isalpha - Entry point
  * @c: paremeter to be checked
  * Return: 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

