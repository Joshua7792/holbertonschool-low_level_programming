#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the first element of the list.
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	/* Initialize a count variable to keep track of the number of nodes */
	int count = 0;

	/* Traverse the list while there are still nodes to process */
	while (h != NULL)
	{
		/* Check if the current node's 'str' member is not NULL */
		if (h->str != NULL)
		{
			/* Print the length and the string value of the current node */
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			/* Print a placeholder message for the case when 'str' is NULL */
			printf("[0] (nil)\n");
		}

		/* Increment the count for each node encountered */
		count++;

		/* Move to the next node in the list */
		h = h->next;
	}

	/* Return the final count, which represents the number of nodes printed */
	return (count);
}
