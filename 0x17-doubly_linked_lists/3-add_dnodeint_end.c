#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	current = *head;

	new->n = n;
	new->next = NULL;

	if (current == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new;
	new->prev = current;

	return (new);
}
