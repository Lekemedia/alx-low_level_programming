<<<<<<< HEAD
#include "main.h"

/**
 * print_line - prints a line
 * @n: variable
 * Return: 0
 */
void print_line(int n)
{
	int a = 0;
	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
=======
#include "main.h"

/**
 * print_line - prints a line
 * @n: variable
 *
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
>>>>>>> e9189db5ed1541851b6357905350dea9e91e9ac2
