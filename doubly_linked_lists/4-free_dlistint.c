#include "lists.h"

/**
 * free_dlistint - Write a function that frees
 * @head: pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	/* Iterate through the linked list, freeing each node it goes */
	while (head != NULL)
	{
		/* Store the current node in a temporary variable */
		tmp = head;

		/* Move the head pointer to the next node */
		head = head->next;

		/* Free the current node */
		free(tmp);
	}
}
