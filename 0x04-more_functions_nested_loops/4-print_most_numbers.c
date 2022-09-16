<<<<<<< HEAD
#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2 , 3
 * Description: prints
 * Return: void
 */
void print_most_numbers(void)
{
	int a = 0;
	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
		a++;
	}
	_purchar('\n');
}
=======
#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2, 3
 * Description: prints
 * Return: void
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
>>>>>>> e9189db5ed1541851b6357905350dea9e91e9ac2
