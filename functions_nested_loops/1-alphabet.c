#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - function that prints the alphabet
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x = 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
