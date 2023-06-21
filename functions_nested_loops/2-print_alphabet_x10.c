#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char x;

	for (x = 48 ; x <= 57 ; x++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		_putchar (x);
	}

	_putchar ('\n');

}
