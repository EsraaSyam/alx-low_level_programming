#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints a char
 * @curr: current argument
 * Return: void
 */

void print_char(va_list curr)
{
	printf("%c", va_arg(curr, int));
}
/**
 * print_int - prints an int
 * @curr: current argument
 * Return: void
 *
*/

void print_int(va_list curr)
{
	printf("%d", va_arg(curr, int));
}

/**
 * print_float - prints a float
 * @curr: current argument
 * Return: void
 */


void print_float(va_list curr)
{
	printf("%f", va_arg(curr, double));
}

/**
 * print_string - prints a string
 * @curr: current argument
 * Return: void
 */

void print_string(va_list curr)
{
	char *str;

	str = va_arg(curr, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list curr;
	unsigned int i, j;
	const char *sep = "";

	print_t print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(curr, format);
	i = 0 , j = 0;
	while (format  && format[i])
	{
		while (print[j].c[0] != NULL)
		{
			if (format[i] == (print[j].c[0]))
			{
				printf("%s", sep);
				print[j].f(curr);
				sep = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
}
