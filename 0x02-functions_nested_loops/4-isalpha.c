#include "main.h"
/**
 * _isalpha - checks if the char is alphabet or not.
 *@c : the char that we want to cheak about.
 * Return: 1 if it is a letter otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
