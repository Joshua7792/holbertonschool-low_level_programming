#include "main.h"
/**
 * *_strncpy - Copies a string
 * @dest: destination of the copy
 * @src: from where Im copying
 * @n: number of characters
 * Return: the value os dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lenght;

	for (lenght = 0; lenght < n && src[lenght] != '\0'; lenght++)
	{
		dest[lenght] = src[lenght];
	}
	for ( ; lenght < n; lenght++)
	{
		dest[lenght] = '\0';
	}
	return (dest);
}
