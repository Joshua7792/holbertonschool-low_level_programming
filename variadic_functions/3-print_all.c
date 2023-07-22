#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function name
 * @format: constant
 */

void print_all(const char * const format, ...)
{
	va_list args;
	f_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_pointer}
	};
	unsigned int i = 0;
	unsigned int x = 0;
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[i])
	{
		x = 0;

		while (x < 4)
		{
			if (format[i] == *types[x].id)
			{
				types[x].f(separator, args);
				separator = ", ";
			}
			x++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_char - print char function
 * @separator: char separator
 * @args: variadic function args
 */

void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - print int function
 * @separator: separators int,
 * @args: variadic func args
 */

void print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_float - print float function
 * @separator: separators float
 * @args: variadic func args
 */

void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_pointer - print pointer
 * @separator: separator pointer
 * @args: variadic func args
 */

void print_pointer(char *separator, va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s%s", separator, s);
}
