#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *@b: bytes
 *@s: pointer
 *@n: -numbers of bytes to be filled
 *Return: return the value if the memste
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0 ; i < n ; i++)
	{
		ptr[i] = b;
	}

	return (s);
}
