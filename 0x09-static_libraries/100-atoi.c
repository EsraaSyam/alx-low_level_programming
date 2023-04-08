#include "main.h"

/**
 * _atoi - Entry point
 * @s: input
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0;
	int a[1000];

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			j++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			a[k] = s[i] - '0';
			k++;
		}
	}
	for (; l < k; l++)
	{
		m = m * 10 + a[l];
	}
	if (j % 2 != 0)
		m = -m;
	return (m);
}
