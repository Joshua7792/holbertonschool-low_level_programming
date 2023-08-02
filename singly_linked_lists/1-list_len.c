#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the first element of the list.
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	/* Initialize a count variable to keep track of the number of elements */
	int count = 0;

	/* Traverse the list while there are still nodes to process */
	while (h != NULL)
	{
		/* Increment the count for each node encountered */
		count++;

		/* Move to the next node in the list */
		h = h->next;
	}

	/* Return the final count, which represents the number of elements in the list */
	return (count);
}
