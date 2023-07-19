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
	int i;
	/*Check if the array and comparison function are NULL. */
	if (array == NULL && cmp == NULL)
	{
		return (-1);
	}
	/*Check if the size is less than or equal to 0. If it is, return -1.*/
	if (size <= 0)
	{
		return (-1);
	}
	/**
	 * comparing each element to the comparison function.
	 * If the comparison function is not a 0, return the index of the element.
	 */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	/* If no match was found, return -1.*/
	return (-1);
}
