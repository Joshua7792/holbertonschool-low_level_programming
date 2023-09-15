#include "search_algos.h"
/**
 * binary_search - Search a value in sorted integer array using binary search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index of the 'value' if found, -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0, i = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
