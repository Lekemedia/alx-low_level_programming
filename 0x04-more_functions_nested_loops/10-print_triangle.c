<<<<<<< HEAD
#include "main.h"

/**
 * print_triangle - check for a digit
 * @size: integer type
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1, ii;
	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_purchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}
		_putchar('#');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
=======
#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	int i = 1, ii;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
>>>>>>> e9189db5ed1541851b6357905350dea9e91e9ac2
