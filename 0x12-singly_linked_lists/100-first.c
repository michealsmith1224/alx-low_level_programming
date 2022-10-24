#include <stdio.h>

/**
  * first_run - run before main
  *
  * Return 9
*/


void __attribute__((constructor)) first_run(void)
{
	printf(
			"you're beat! and yet, you must allow,\nI bore my houseupon my back!\n");
}
