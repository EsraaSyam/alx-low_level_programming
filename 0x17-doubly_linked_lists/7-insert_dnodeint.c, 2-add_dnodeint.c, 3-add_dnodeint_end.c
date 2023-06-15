#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *current, *new;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	current = *h;

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = current;
		*h = new;
		return (new);
	}

	for (count = 0; count < idx - 1; count++)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}

	new->next = current->next;
	new->prev = current;
	current->next = new;

	return (new);
}
