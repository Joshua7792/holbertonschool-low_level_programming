#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that pritns its name,
 * followed by a new line.
 * @argc: Counts arguments
 * @argv: the argument of the array
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
