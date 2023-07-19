#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

/**
 * int_index - index from arrays
 * @array: array of elements
 * @size: numbers of elements
 * @cmp: comparison
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;
	/*check size*/
	if (size <= 0)
		return (-1);
	/*Verify pointer content*/
	if (array != NULL && cmp != NULL)
	{
		/*Verify array content*/
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]) != 0)
				return (n);
		}
	}
	return (-1);
}
