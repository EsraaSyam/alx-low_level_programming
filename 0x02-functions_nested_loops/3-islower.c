#include "main.h"
/**
 * _islower - check if the letter is in lowercase or not.
 * @c :  the char that we want to cheak about
 * Return: 1 if it is lowercase otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
