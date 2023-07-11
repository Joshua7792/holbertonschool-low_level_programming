#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function to allocates memory using malloc
 * @b: memory allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;
	/* Allocate memory of the specified size */
	ptr = malloc(b);
	/* Check if the malloc failed. */
	if (ptr == NULL)
	{
		/* The malloc failed */
		exit(98);
	}
	/* Return the pointer to the allocated memory */
	return (ptr);
}
