#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
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
	char *str;
	unsigned int len;
	struct listint_s *next;
} list_t;

/* Prototypes */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
