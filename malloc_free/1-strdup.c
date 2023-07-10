#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - return a pointer with a string
 * @str: pointer of the string
 * Return: Pointer
 */

char *_strdup(char *str)
{
char *new_str;
int len;
/** Check if the input string is NULL. If it is, return NULL */
if (str == NULL)
{
return (NULL);
}
/** Calculate the length of the new string */
len = strlen(str) + 1;

/** Allocate a new memory block for the duplicated string */
new_str = malloc(len);

/** Check if the memory allocation was successful. If it wasn't, return NULL */
if (new_str == NULL)
{
return (NULL);
}

/** Copy the contents of the new string to the newly allocated memory block */
memcpy(new_str, str, len);
return (new_str);
}
