#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the first element of the list.
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
