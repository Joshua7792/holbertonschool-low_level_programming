#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument counts
 * @av: argument elements
 * Return: arguments
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int len1, i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len1 = strlen(*av);
	new_str = malloc(len1 + 1 + ac);

	if (new_str == NULL)
	{
		return (NULL);
	}
	

	for (i = 0; i < ac; i++)
	{
		memcpy(new_str + strlen(new_str), av[i], strlen(av[i]));
		new_str[strlen(new_str) + 1] = '\n';
	}
	
	return (new_str);
}