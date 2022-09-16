<<<<<<< HEAD
#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{_
	unsigned int x;
	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
=======
#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
>>>>>>> e9189db5ed1541851b6357905350dea9e91e9ac2
