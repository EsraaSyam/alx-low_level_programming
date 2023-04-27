#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

/* Prototypes */
size_t print_list(const list_t *h);
void print_unsigned_int(unsigned int n);
void _puts(char *str);

#endif /* LISTS_H */
