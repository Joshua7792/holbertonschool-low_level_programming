#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - print most numbers
 *
 */

void print_most_numbers(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
		else
		{
			_putchar('\n');
		}
	}
}
