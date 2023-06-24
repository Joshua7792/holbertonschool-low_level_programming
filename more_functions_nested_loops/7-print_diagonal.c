#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line.
 * @n: the parameter
 */

void print_diagonal(int n)
{
	int line;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else

		for (int line = 0; line < n; line++)
		{
			for (int spaces = 0; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}
