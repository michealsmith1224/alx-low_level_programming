#include <unistd.h>

/**
  * _putchar - out to stdout
  * @c: char printed
  * Return: 0
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}
