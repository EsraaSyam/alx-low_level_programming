#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - print multiplication of two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error.
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
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
		return (0);
	}
}
