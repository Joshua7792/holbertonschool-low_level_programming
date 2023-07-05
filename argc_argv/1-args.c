#include <stdio.h>
#include "main.h"

/**
 * * main - Write a program that pritns number of arguments
 * followed by a new line.
 * @argc: Counts arguments
 * @argv: the argument of the array
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
		;

	printf("%d\n", argc);
	return (0);
}

