#include <stdio.h>
#include "main.h"
#include <ctype.h>


/**
 * _islower - Checks for lowercase characters.
 * Return: Return 1 for lowercase, return 0 otherwise.
 * @c: value to return 1 in lowercase
 */

int _islower(int c)
{
	if (c == 'a' && c == 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
