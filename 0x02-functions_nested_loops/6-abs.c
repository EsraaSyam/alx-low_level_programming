#include "main.h"
/**
 * _abs - calculate absolute value of a number.
 *@n : the number to check
 * Return: absolute function.
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	n *= -1;
	return (n);
}
