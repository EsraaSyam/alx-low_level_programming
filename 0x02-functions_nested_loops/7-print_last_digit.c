#include "main.h"
/**
 * print_last_digit - prints the last digit.
 *@n : the number to check about.
 * Return: the number.
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
