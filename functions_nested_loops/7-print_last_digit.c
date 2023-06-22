#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print last digit
 * Return: value of the last digit
 * _putchar : print last digit
 * @n: value of the last digit
 */

int print_last_digit(int n)
{
	int a;

	a = (n % 10);

	if (n < 0)
	{
		_putchar('0' + a)
	}
	return (a);

}
