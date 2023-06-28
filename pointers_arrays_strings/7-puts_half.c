#include <stdio.h>
#include "main.h"

/**
 *puts_half - prints half of string
 *@str: pointer
 */

void puts_half(char *str)
{
	int leng = 0;
	int even, odd;

	for (; str[leng] != ('\0') ; leng++)
		;

	if ((even = 0 % 2) == 0)
	{
		for (even = leng / 2 ; str[even] != '\0' ; even++)
		{
			_putchar(str[even]);
		}
	}
	else
	{
		for (odd = (leng - 1) / 2 ; odd < leng - 1 ; odd++)
		{
			_putchar(str[odd]);
		}
	}
	_putchar('\n');

}
