#include "lists.h"

/**
 * print_unsigned_int - prints an unsigned integer
 * @n: unsigned integer to print
 *
 * Return: void
 */

void print_unsigned_int(unsigned int n)
{
	if (n / 10)
		print_unsigned_int(n / 10);
	_putchar((n % 10) + '0');
}
