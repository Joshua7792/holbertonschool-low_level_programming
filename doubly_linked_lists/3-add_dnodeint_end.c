#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the pointer to the first node of the list.
 * @n: Integer value to be added to the new node.
 * Return: Address of the new element or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* Create a new node and allocate memory for it */
	dlistint_t *last_node;
	dlistint_t *tmp;

	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
		return (NULL);

	/* Set the value and pointers of the new node */
	last_node->n = n;
	last_node->next = NULL;

	/* Check if the list is empty */
	if (*head == NULL)
	{
		/* If the list is empty, the new node becomes the head of the list */
		*head = last_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		/* Update the next pointer of the last node to point to the new node */
		tmp->next = last_node;
		last_node->prev = tmp;

	}
	/* Return the address of the new element (the new node) */
	return (last_node);
}
