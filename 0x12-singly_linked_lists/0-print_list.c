#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			_puts("[0] (nil)");
		else
		{
			_putchar('[');
			print_unsigned_int(h->len);
			_puts("] ");
			_puts(h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
