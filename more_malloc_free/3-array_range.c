#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - range of the array
 * @min: min
 * @max: max
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, *ptr, range;

	range = (max - min + 1);

	/* Check if the minimum value is greater than the maximum value. */
	if (min > max)
	{
		return (NULL);
	}

	/* Allocate memory for the array. */
	ptr = malloc(sizeof(int) * range);

	/* Check if malloc fails */
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Fill the array with the values from min to max. */
	for (i = min; i <= max; i++)
	{
	/* Value of i will be used to set the value of the element at index*/
		ptr[i - min] = i;
	}

	/* Return the pointer to the array. */
	return (ptr);
}
