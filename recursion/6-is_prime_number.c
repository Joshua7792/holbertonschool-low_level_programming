#include "main.h"

/**
 * checker - function name
 * @n: var
 * @a: var
 * Return: int value
 */

int checker(int n, int a)
{
	if (a % n == 0 || a < 2)
		return (0);
	else if (n == a - 1)
		return (1);
	else if (a > n)
		return (checker(n + 1, a));
	return (1);
}

/**
 * is_prime_number - function name
 * @n: int var
 * Return: int value
 */

int is_prime_number(int n)
{
	return (checker(2, n));
}
