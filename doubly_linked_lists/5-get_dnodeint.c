#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node  
 * @head: pointer of list
 * @index: number of index
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i != index)
	{
		head = head->next;
		i++;
	}
	return(head);
}
