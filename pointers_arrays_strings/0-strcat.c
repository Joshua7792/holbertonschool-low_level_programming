#include "main.h"

/**
 * _strcat - This funciont appendes the src to the dest string
 * @dest: original
 * @src: to be added to dest
 * Return: :dest
 */
char *_strcat(char *dest, char *src)
{
	int  a, b;

	a = 0;
	b = 0;

	for (; dest[a] != '\0' ; a++)
	{
	}

	for (; src[b] != '\0' ; b++)
	{
		dest[a] = src[b];
	}

	dest[a] = '\0';

	return (dest);

}
