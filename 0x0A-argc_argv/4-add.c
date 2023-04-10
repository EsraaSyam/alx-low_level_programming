#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the add of the positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if error or 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error");
				printf("\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
