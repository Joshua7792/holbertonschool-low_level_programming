#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * @h: Pointer to the pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Integer value to be added to the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i;

	/* If the index is 0, add the new node at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse the list to find the node at index 'idx - 1' (previous node) */
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		/* Check if tmp is NULL, which indicates the index is out of bounds */
		if (tmp == NULL)
		{
			return (NULL);
		}
	}

	/* If the next node is NULL, add the new node at the end */
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Create a new node and allocate memory for it */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* Update the pointers to insert the new node after the previous node */
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	/* Return the address of the new element (the new node) */
	return (new_node);

}
