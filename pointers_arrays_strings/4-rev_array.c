#include "main.h"

/**
 * reverse_array -reverse the array
 * @a: pointer
 * @n: integer
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;

		for (; i < n ; i++)
		{
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}

}
