#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * @n: value of the natural number
 */

void print_to_98(int n)
{
	for ( ; n != 98 ; n)
	{
		printf("%d, "n);

	}
	if (n <= 98)
	{
		printf("%d, "n);
		n++
	}

	else if (n >= 98)
	{
		printf("%d, "n);
		n--
	}


	return (98"\n");


}
