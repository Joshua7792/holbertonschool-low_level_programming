#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *create_array - create an array
 *@size: size of array
 *@c: char
 *Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

/** Check if the size is 0. If it is, return NULL. */
	if (size == 0)
	{
		return (NULL);
	}
/** Allocate a memory block for the array. */
	ptr = malloc(sizeof(char) * size);

/** Check if the memory allocation was successful.If it wasn't, return NULL*/
	if (ptr == NULL)
	{
		return (NULL);
	}

/** Iterate over the array and fill it with the specified character. */
	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
/** Return a pointer to the newly created array. */
	return (ptr);
}
