#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes (elements) in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
    /* Initialize a count variable to keep track of the number of nodes */
    int count = 0;

    /* Traverse the list while there are still nodes to process */
    while (h != NULL)
    {
        /* Print the value of the current node */
        printf("%d\n", h->n);

        /* Increment the count for each node encountered */
        count++;

        /* Move to the next node in the list */
        h = h->next;
    }

    /* Return the final count, which represents the number of nodes printed */
    return (count);
}
