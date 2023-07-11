#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenated two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
int len1;
int len2;
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

/* Allocate a memory block for the concatenated string */
new_str = malloc(len1 + len2 + 1);

/*  Check if the memory allocation was successful. If it wasn't, return NULL */
if (new_str == NULL)
{
return (NULL);
}

/* Copy the contents of the first and second string to the new memory block */
memcpy(new_str, s1, len1);
memcpy(new_str + len1, s2, len2);

return (new_str);
}
