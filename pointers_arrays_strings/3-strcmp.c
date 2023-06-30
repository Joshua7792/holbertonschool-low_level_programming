#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: return the value of strings
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2 ; s1++, s2++)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	return (*s1 - *s2);
}
