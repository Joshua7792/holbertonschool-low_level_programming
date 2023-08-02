#include "lists.h"

/**
 * free_list - free the list
 * @head: Pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	/* Iterate through the linked list, freeing each node it goes */
	while (head != NULL)
	{
		/* Store the current node in a temporary variable */
		tmp = head;

		/* Move the head pointer to the next node */
		head = head->next;

		/* Free the 'str' member of the current node */
		free(tmp->str);

		/* Free the current node */
		free(tmp);
	}
}
