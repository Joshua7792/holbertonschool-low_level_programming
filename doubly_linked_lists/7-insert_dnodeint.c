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

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
