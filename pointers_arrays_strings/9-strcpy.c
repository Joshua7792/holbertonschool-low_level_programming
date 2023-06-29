#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copy
 * @dest: destination
 * @src: elements
 *
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0 ; src[c] ; c++)
	{
		dest[c] = src[c];
	}

	return (dest);

}
