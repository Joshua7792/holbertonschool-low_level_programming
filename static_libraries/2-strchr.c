#include "main.h"
#include <stdio.h>
/**
 * _strchr - functions return a pointer to the first
 * ocurrence of the character c in the string s.
 * @c: specifies the character to be search for
 * @s: specifies the pointer to the null termianted string
 * Return: the value of string if truth otherwise 0
 */

char *_strchr(char *s, char c)
{
	char *ptr = s;

	for (; *ptr != '\0'; ptr++) {
		if (*ptr == c) {
			return ptr;
		}

	}

	return (NULL);
}
