#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter on each element
 *@array: array
 *@size: size of element
 *@action: action to make the funtion run
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;
	/* Checks if the array and action pointers are not NULL */
	if (array != NULL && action != NULL)
	{
		/* Iterates over the array. N is used to keep track of the current index. */
		for (n = 0; n < size; n++)
		{
			/* Executes the action function on the element at index n in the array. */
			action(array[n]);
		}
	}
}
