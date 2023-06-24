#include <stdio.h>
#include "main.h"

/**
 * print_line - print underline
 * @n: value
 */

void print_line(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}

	int line;
	for (line = 0 ; line < n ; line ++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
