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

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
