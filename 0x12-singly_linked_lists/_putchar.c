#include <unistd.h>

/**
  * _putchar - write to std output
  * @c: para passed
  *
  * Return (0)
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}
