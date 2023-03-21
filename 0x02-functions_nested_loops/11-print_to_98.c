# include "main.h"

/**
 * print_to_98 - print n to 98.
 * @n: number.
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
			_putchar(i + '0');
	}
	else
	{
		for (i = n ; i >= 89 ; i--)
			_putchar(i + '0');
	}

	_putchar('\n');
}
