#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int row, col, t;

	t = row * col;

	for (row = 0 ; row <= 9 ; row++)
	{
		for (col = 0 ; col <= 9 ; col++)
			_putchar (t + '0');
		_putchar (',');
		_putchar (' ');
		_putchar ('\n');

	}
}
