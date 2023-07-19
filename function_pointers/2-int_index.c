#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - index from arrays
 * @array: array of elements
 * @size: numbers of elements
 * @cmp: comparison
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL && cmp == NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			return (i);
		}
	}
	return (-1);
}
