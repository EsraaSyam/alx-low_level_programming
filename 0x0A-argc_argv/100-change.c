#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if error or 0 (success)
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins++;
	}
	printf("%d", coins);
	return (0);
}
