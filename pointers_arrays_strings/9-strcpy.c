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

	for (c = 0 ; src[c] != '\0' ; c++)
	{
		dest[c] = src[c];
	}

	dest[c] = '\0';

	return (dest);

}
