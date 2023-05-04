#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be evaluated
 * @index: index of the bit to be returned
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k;

	if (index > 63)
		return (-1);

	k = n >> index;

	if (k & 1)
		return (1);
	else
		return (0);
}
