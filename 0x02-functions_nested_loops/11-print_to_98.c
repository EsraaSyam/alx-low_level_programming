# include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98.
 * @n: number.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			_putchar(i + '0');
			if (i == 98)
				continue;
			printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			_putchar(i + '0');
			if (i == 98)
				continue;
			printf(", ");
		}
	}
	else
		printf("98");

	_putchar('\n');
}
