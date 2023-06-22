#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print last digit
 * Return: value of the last digit
 * @n: value of the last digit
 */

int print_last_digit(int n)
{
	int a;

	a = (n % 10);
	_putchar(a * (-1));

	return (a);

}
