#include "main.h"
#include <stdio.h>

/**
 * print_rev - print reverse
 * @s: pointer
 */

void print_rev(char *s)
{
	int length = 0;

	for (; s[length] != '\0'; length++)
	{
	}

	length = length - 1;

	for (; length >= 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}












