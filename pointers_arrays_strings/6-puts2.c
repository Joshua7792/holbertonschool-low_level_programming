#include <stdio.h>
#include "main.h"

/**
 *puts2 - even numbers
 *@str: strenght
 */

void puts2(char *str)
{

int leng, even;
leng = 0;

	for (; str[leng] != '\0' ; leng++)
		;


	for (even = 0 ; even < leng ; even++)
	{
		if ((even % 2) == 0)
		{
			_putchar(str[even]);
		}
		_putchar('\n');
	}
}

