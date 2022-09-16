#include <stdio.h>
#include <math.h>

/**
  * main - prime numbers
  *
  * @n: char received
  *
  * Return: 0
*/

unsigned int long maxPrimeFactors(unsigned int long n)
{
	unsigned int long maxPrime = -1;
	int i;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 1;
	}
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n = n / 3;
	}

	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}

	if (n > 4)
		maxPrime = n;
	return (maxPrime);

}




int main(void)
{

	printf("%lu \n", maxPrimeFactors(612852475143));
	return (0);
}
