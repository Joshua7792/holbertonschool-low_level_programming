#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints the numbers
 * @separator: separates
 * @n: constant
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);

	printf("\n");
}
