#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function to allocates memory using malloc
 * @b: memory allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
    char *ptr;

    ptr = malloc[b];
    if (ptr == NULL)
    {
        exit(98);
    }

    return (ptr);
}
