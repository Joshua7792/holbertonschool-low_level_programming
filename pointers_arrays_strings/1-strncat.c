#include "main.h"
/**
 * _strncat - function
 * Return: Return a pointer
 * @src: sources
 * @dest: destination
 * @n: number
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, lenght;

	lenght = 0;

	for (; dest[lenght] != '\0' ; lenght++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lenght + i] = src[i];
	}
	dest[lenght + i] = '\0';
	return (dest);
}
