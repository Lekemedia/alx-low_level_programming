<<<<<<< HEAD
#include <stdio.h>

/**
 * main - prime numbers
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long larg_prim = 0;
	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			larg_prim = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}
=======
#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long larg_prim = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			larg_prim = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}
>>>>>>> e9189db5ed1541851b6357905350dea9e91e9ac2
