#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all- sums all the args of a varfunc
 *@n: holds a const int value
 *Return: 0
 */

int sum_them_all(unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;
	int value;

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
		value = va_arg(args, int);
		sum += value;
	}
	va_end(args);

	/* Return the sum of the parameters. */
	return (sum);
}
