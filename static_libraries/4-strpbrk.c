#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to compared
 * @accept: string that we gonna use
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
	char *ptr = s;

	for (; *ptr != '\0'; ptr++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*ptr == accept[j])
			{
				return (ptr);
			}
		}
	}
	return (0);
}
