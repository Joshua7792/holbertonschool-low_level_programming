#include "lists.h"

/**
 * add_node_end - function that adds a new node add the end
 * @head: pointer
 * @str: strings of the new node
 * Return: returns the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

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

	/* The new node will be the last node, so its next pointer should be NULL */
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, the new node becomes the head of the list */
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		/* Update the next pointer of the last node to point to the new node */
		temp->next = new_node;
	}

	return (new_node);
}
