#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string to be concatenated
 * @n: how many character ot s2 we gonna passed
 * Return: return null is malloc fail, otherwise return p
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *new_str;
	/* Check if the first string is NULL. If it is, set it to an empty string */
	if (s1 == NULL)
	{
		s1 = "";
	}

	/* Check if the second string is NULL. If it is, set it to an empty string */
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* Calculate the length of the first and second string */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Check if n is greater than the length of s2 */
	if (n > len2)
	{
		n = len2;
	}

	/* Allocate a memory block for the concatenated string */
	new_str = malloc(len1 + n + 1);

	/*Check if the memory allocation was successful. If it wasn't, return NULL*/
	if (new_str == NULL)
	{
		return (NULL);
	}

	/* Copy the contents of the first and second string to the new memory block */
	memcpy(new_str, s1, len1);
	memcpy(new_str + len1, s2, n);

	/* terminated the new str with a NULL char */
	new_str[len1 + n] = '\0';
	return (new_str);
}
