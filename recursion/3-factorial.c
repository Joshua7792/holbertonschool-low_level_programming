#include <stdio.h>
#include "main.h"

/**
 *factorial - returning factorial of a number
 *@n: variable
 *Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else
	{
		return (n * factorial(n - 1));
	}
}
