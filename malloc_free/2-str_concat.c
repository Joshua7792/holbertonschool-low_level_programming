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

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);
new_str = malloc(len1 + len2 + 1);

if (new_str == NULL)
{
return (NULL);
}
memcpy(new_str, s1, len1);
memcpy(new_str + len1, s2, len2);
new_str[len1 + len2] = '\0';

return (new_str);
}