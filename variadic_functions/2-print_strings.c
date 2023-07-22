#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints the strings
 * @separator: separates
 * @n: constant
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	/* Loop through the list of integers and print each element */
	for (i = 0; i < n; i++)
	{
		/* Retrieve the next string from the variable arguments list */

		str = va_arg(strings, char*);
		if (str == NULL)
		{
			printf("(nil)"); /* Print "(nil)" for NULL strings.*/
		}
		else
		{
			printf("%s", str); /* Print the strings */
		}
		/* Print separator if it is not NULL and not the last element. */
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(strings);

	printf("\n"); /* Print a new line at the end. */
}
