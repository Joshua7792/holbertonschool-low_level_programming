#include "main.h"
/**
 * _strspn - get lenght of a prefix substring
 * @s: string to compared
 * @accept: straing that we gonna use
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (i);
}
