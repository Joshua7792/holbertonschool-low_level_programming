#include "lists.h"

/**
 * add_node - function that adds a new node
 * @head: head of the node
 * @str: string
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Allocate a new node. */
	new_node = malloc(sizeof(list_t));
	if (str == NULL || new_node == NULL)
	/* The malloc() call failed */
		return (NULL);

	/* Copy the string & Calculate the length of the new node */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Update the next pointer of the new node to point to the current head */
	new_node->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new_node;

	return (new_node);
}
