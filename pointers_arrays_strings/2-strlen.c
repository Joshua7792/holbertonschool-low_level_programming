#include <stdio.h>
#include "main.h"

/**
 * int_strlen(char *s);
 * Return: return
 */

int _strlen(char *s)
{
int x;

	for (x = 0 ; s[x] != '\0' ; x++)
		;
	return (x);
}
