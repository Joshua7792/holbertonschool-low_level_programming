#include <stdio.h>
#include "main.h"
#include <inttypes.h>

/**
 *_abs - computes the abosolute value of an integer
 *Return: always 0
 *@n: value of an integer
 */

int _abs(int n)
{
	int i;

	i = (n * (-1));

	if (n < 0)
	{
		return (i);
	}
	else
	{
		return (n);
	}
}
