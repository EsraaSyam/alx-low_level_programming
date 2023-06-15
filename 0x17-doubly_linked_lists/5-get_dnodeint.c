#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: address of the nth node, or NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;

	for (count = 0; count < index; count++)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
	}

	return (current);
}
