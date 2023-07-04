#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - recursion to the power of y
 * @x: base
 * @y: power of base
 * Return: power of the recursion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (x == 0)
		return (1);

	else
	{
		return (x * int _pow_recursion(y - 1));
	}
}
