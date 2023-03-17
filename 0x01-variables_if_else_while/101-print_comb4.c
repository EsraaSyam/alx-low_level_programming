#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, x;

	for (n = 0 ; n < 8 ; n++)
	{
		for (m = n + 1 ; m < 9 ; m++)
		{
			for (x = m + 1 ; x < 10 ; x++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(x + '0');

				if (n == 7 && m == 8 && x == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
