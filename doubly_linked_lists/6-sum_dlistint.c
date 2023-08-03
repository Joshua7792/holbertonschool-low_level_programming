#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a dlistint_t list.
 * @head: Pointer to the head of the list.
 * Return: The sum of all the data (n) or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	/* Initialize a variable to keep track of the sum */
	int sum = 0;
	/* Go through the list and add the data (n) of each node to the sum */
	while (head != NULL)
	{
		/* Add the value of the current node's data (n) to the sum */
		sum = sum + head->n;
		/* Move to the next node in the list */
		head = head->next;
	}
	/* Return the sum of all the data (n) or 0 if the list is empty */
	return (sum);
}
