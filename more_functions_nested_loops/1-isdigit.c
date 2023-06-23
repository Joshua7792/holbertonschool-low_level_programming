#include <stdio.h>
#include "main.h"

/**
 *_isdigit - check digits from 0 to 9
 *Return: 1 is c is a digit or 0 otherwise
 *@c: digit
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
