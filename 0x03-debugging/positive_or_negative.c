#include <stdio.h>
#include <stdlib.h>
#include <time.h>






void positive_or_negative(int i)
{
	if (i >= 1)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
