#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory of an array.
 * @nmemb: n of bytes in mem block
 * @size: size
 * Return: pointer with allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	/* Check if either of the parameters is zero. */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Allocate the requested memory. */
	ptr = malloc(nmemb * size);
	/* Check if malloc returned NULL. */
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Initialize the allocated memory to zero. */
	memset(ptr, 0, nmemb * size);
	/* Return the pointer to the allocated memory. */
	return (ptr);
}
