#include <stdio.h>
#include "main.h"
#include <ctype.h>


/**
 * _isupper - Checks for uppercase characters.
 * Return: Return 1 for uppercase, return 0 otherwise.
 * @c: value to return 1 in uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
