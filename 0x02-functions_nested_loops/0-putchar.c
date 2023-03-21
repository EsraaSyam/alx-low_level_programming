#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "_putchar";
	int c = 0;

	for (c = 0; c < 8; c++)
		_putchar (str[c]);
	_putchar ('\n');
	return (0);
}
