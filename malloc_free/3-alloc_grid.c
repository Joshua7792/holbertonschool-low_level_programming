#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - function
 * @width: width
 * @height: height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **table;
	/* Check if width and height are valid */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* Allocate memory for the array of pointers */
	table = malloc(sizeof(int *) * height);
	if (table == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for each row in the array */
	for (i = 0; i < height; i++)
	{
		table[i] = malloc(sizeof(int) * width);
		if (table[i] == NULL)
		{
			/* Free the memory that was already allocated */
			for (j = 0; j < i; j++)
			{
				free(table[j]);
			}
			free(table);
			return (NULL);
		}
	}
	/* Initialize each element of the table to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			table[i][j] = 0;
		}
	}
	return (table);
}
