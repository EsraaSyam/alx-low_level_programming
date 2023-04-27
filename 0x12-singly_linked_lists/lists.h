#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node struct
 * for Holberton project
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Prototypes */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
