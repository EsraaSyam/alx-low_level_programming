#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
