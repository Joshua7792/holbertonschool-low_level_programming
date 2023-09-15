#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array of intergers
 * usign the Linear search algotithm
 *
 * @array: is a pointer to the first element of the array
 * @size: is the number if elements in array
 * @value: is the value to search for
 *
 * Return: if value is not present in array or if array is NULL, your function
 * must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		i++;
	}
	return (-1);
}
