#include "main.h"
/**
 * print_sign - prints the sign of a each number.
 *@n : the number that we want to cheak about.
 * Return: 1 if it is positive , 0 if it is 0, otherwise -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
