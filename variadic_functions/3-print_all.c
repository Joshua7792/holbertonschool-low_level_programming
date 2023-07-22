#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: is a list of types of argument passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list all;
	int a = 0, b = 0;
	char *p = NULL;

	/* Loop through the format string, one character at a time */
	va_start(all, format);
	while (format && format[b])
		b++;
	while (format && format[a])
	{
		/* Get the next argument from the variable argument list */
		switch (format[a])
		{
			/* Print a character */
			case 'c':
				printf("%c", va_arg(all, int));
				break;

			/* Print an integer */
			case 'i':
				printf("%d", va_arg(all, int));
				break;

			/* Print a float */
			case 'f':
				printf("%f", va_arg(all, double));
				break;

			/* Print a string */
			case 's':
				/* Get the string from the variable argument list */
				p = va_arg(all, char *);

				/* Check if the string is NULL */
				if (p == NULL)
				{
					/* Print "(nil)" */
					printf("(nil)");
					break;
				}

				/* Print the string */
				printf("%s", p);
				break;

			/* Default case */
			default:
				/* Do nothing */
				a++;
				continue;
		}

		/* If this is not the last argument, print a comma */
		if (a != b - 1)
			printf(", ");

		/* Increment the counter */
		a++;
	}

	/* Close the variable argument list */
	va_end(all);

	/* Print a newline */
	printf("\n");
}
