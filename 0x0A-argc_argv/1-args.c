#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - print the number of arguments passed to the input.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
