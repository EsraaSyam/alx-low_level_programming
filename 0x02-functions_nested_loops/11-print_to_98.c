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
		{
			_putchar(i + '0');
			if (i == 98)
				continue;
			_putchar(',');
		}
	}
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
			_putchar(i + '0');
			if (i == 98)
				continue;
			_putchar(',');
		}
	}

	_putchar('\n');
}
