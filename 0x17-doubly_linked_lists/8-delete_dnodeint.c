#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	for (count = 0; count < index; count++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	temp = current->prev;
	temp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;
	free(current);

	return (1);
}
