#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1 or 2
 */

int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
		printf("%02hhx%c", p[i], i == n - 1 ? '\n' : ' ');
	return (0);
}

