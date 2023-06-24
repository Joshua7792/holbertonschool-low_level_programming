#include "main.h"
/**
 * print_square - print a squared
 * @size: the parameter
 */
void print_square(int size)
{
	int l, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0 ; l < size ; l++)
		{
			for (r = 0 ; r < size ; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
