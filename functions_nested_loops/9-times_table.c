#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int r;
	int c;

	for (r = 0 ; r <= 9 ; r++)
	{
		for (c = 0 ; c <= 9 ; c++)
			{
				_putchar ((c * r) / 10 + '0');
				_putchar ((c * r) % 10 + '0');
				_putchar (',');
				_putchar (' ');
			}
		_putchar ('\n');
	}
}
