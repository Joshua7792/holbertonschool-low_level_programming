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
	int all;

	for (all = 0; all < argc; all++)
	{
		printf("%s \n", argv[all]);
	}
	return (0);
}
