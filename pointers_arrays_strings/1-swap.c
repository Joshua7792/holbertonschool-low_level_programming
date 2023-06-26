#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swap the value of two intergers
 * @a: Interger
 * @b: Interger
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
