<<<<<<< HEAD
#include "main.h"

/**
 * more_numbers - prints 0 - 14
 * Return: void
 */
void more_numbers(void)
{
	char n, c;
	int i = 0;
	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_purchar('0' + c);
		}
		_putchar('\n');
		i++;
	}
}
=======
#include "main.h"

/**
 * more_numbers - prints 0 - 14
 *
 * Return: void
 */

void more_numbers(void)
{
	char n, c;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + c);
		}

		_putchar('\n');
		i++;
	}
}
>>>>>>> e9189db5ed1541851b6357905350dea9e91e9ac2
