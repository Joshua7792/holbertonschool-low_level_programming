#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;;

	/* Check if n is 0. */
	if (n == 0)
	{
		return (0);
	}

	/* Iterate over the parameters and add them to the sum. */
	va_start(args, n);
	for (i = 0; i < n; i++) 
	{
		/*statement adds the value of the parameter to the sum variable*/
		int value = va_arg(args, int);
		sum += value;
	}
	va_end(args);

	/* Return the sum of the parameters. */
	return (sum);
}
