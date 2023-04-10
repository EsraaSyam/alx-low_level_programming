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

int main(int argc, char **argv)
{
	int cents, coins = 0, coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 0; i < 5; i++)
	{
		while (cents >= coin[i])
		{
			cents -= coin[i];
			coins++;
		}
	}

	printf("%d\n", coins);
	return (0);
}
