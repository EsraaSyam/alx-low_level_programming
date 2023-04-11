#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to copy to the new allocated space.
 *
 * Return: pointer to the duplicated string, or NULL if str = NULL.
 */

char *_strdup(char *str)
{
	char *dupli;
	int i, length;

	if (str == NULL)
		return (NULL);

	length = strlen(str);
	dupli = malloc(sizeof(char) * (length + 1));
	if (dupli == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dupli[i] = str[i];
	dupli[i] = '\0';

	return (dupli);
}
