#include "lists.h"

/**
 * add_dnodeint - add a node in the beginning
 * @head: pointer to the pointer to the first node in the list
 * @n: integer value to be added to the new node
 * Return: address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Allocate memory for the new node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	/* Set the value and pointers of the new node */
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	/* Update the previous pointer of the old head, if it exists */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}
