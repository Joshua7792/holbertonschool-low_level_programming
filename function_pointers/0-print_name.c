#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - funtion that prints the name
 * @f: pointer of char
 * @name:  value of the pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
