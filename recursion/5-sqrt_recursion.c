#include "main.h"
/**
 *square_root - calculating the square root
 *@find: root number
 *@n: randomized number
 *Return: return the root, if you cant return -1
 */
int square_root(int find, int n)
{
	int the_square = find * find;

	if (the_square < n)
	{
		return (square_root(find + 1, n));
	}
	else if (the_square > n)
	{
		return (-1);
	}
	return (find);
}
/**
 *_sqrt_recursion - reurning the natural square root
 *@n: number to find the square root
 *Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (square_root(0, n));
}
