#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting from 0.
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	/* Go through the list until we reach the index or the end of the list */
	while (i != index)
	{
		/* Check if we reach the end of the list before finding the desired index */
		if (head == NULL)
		{
			/* Return NULL if the node does not exist */
			return (NULL);
		}
		/* Move to the next node in the list */
		head = head->next;
		/* Increment the current index */
		i++;
	}
	/* Return the pointer to the nth node (found at the desired index) */
	return (head);
}
