#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of elements (length) of the list.
 */

size_t dlistint_len(const dlistint_t *h)
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

    /* Return the final count, which represents the length of the list */
    return (count);
}
