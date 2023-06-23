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
			if ((c * r) >= 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ((r * c) / 10 + '0');
				_putchar ((r * c) % 10 + '0');
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar ((r * c) + '0');
			}
			_putchar ('\n');
		}
	}
