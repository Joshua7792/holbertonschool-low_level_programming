#include <stdio.h>
#include "main.h"

/**
 *_stre
 *
 */
int _strlen_recursion(char *s)
{
	if (*s=='\0')
		return;

	else
		return 1 + _strlen_recursion(s+1);
}
