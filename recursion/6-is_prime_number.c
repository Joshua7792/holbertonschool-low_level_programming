#include "main.h"
/**
 *is_prime_number - returning a prime number if it
 *@n: number to be evaluated by function
 *Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int find = 2;

	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	return (looking_for_prime(n, find + 1));
}
/**
 *looking_for_prime - finding the prime number
 *@find: value that will calculate prime
 *@n: number to be evaluated
 *Return: recursive result
 */
int looking_for_prime(int n, int find)
{
	if (n % find == 0)
	{
		return (0);
	}
	else if (find * find > n)
	{
		return (1);
	}
	return (looking_for_prime(n, find + 1));
}