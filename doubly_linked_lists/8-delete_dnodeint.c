#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * @head: Pointer to the pointer to the head of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);
	/* If the index is 0, delete the first node (node at index 0) */
	if (index == 0)
	{
		/* Update the head to point to the next node */
		*head = current->next;
		/* Update the previous pointer of the new first node, if it exists */
		if (*head != NULL)
			(*head)->prev = NULL;
		/* Free the current first node */
		free(current);
		/* Return 1 to indicate success */
		return (1);
	}
	/* Traverse the list to find the node at index 'index' */
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	/* Check if the index is valid (the node was found) */
	if (current == NULL)
		return (-1);
	/* Update the next and previous pointers of the neighboring nodes */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	/* Free the node at index 'index' */
	free(current);
	/* Return 1 to indicate success */
	return (1);
}
