#include "main.h"

/**
 *_memset -fills memory with a constant byte.
 *@b: bytes
 *@s: pointer
 *@n -numbers of bytes to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
	char *ptr = s;

    for (i = 0; i < n; i++)
    {
        *ptr = b;
    }

    return (s);
}
