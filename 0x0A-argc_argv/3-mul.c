#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - print multiplication of two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	else
	{
		i = _atoi(argv[1]);
		j = _atoi(argv[2]);
		mul = i * j;
		printf("%d", mul);
		printf("\n");
		return (0);
	}
}
