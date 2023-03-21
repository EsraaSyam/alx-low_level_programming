#include "main.h"
/**
 * times_table - print time table for 9.
 * return : void.
 */

void times_table(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');
		for (m = 1; m < 10; m++)
		{
			_putchar(',');
			_putchar(' ');

			if (n * m <= 9)
				_putchar(' ');
			else
				_putchar((n * m) / 10 + '0');

			_putchar((n * m) % 10 + '0');
		}
		_putchar('\n');
	}
}
