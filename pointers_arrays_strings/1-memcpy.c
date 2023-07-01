#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *@b: bytes
 *@s: pointer
 *@n: -numbers of bytes to be filled
 *Return: return the value if the memste
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;
	char *ptr2 = src;

	for (i = 0 ; i < n ; i++)
	{
		ptr[i] = ptr2[i];
	}

	return (dest);
}
