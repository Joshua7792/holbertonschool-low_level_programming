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

	va_start(all, format);
	while (format && format[b])
		b++;
	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				p = va_arg(all, char *);
				if (p == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", p);
				break;
			default:
				a++;
				continue;
		}
		if (a != b - 1)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(all);
}
