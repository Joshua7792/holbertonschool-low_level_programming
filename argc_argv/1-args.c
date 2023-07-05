#include <stdio.h>
#include "main.h"

/**
 * * main - Write a program that pritns number of arguments
 * followed by a new line.
 * @argc: Counts arguments
 * @argv: the argument of the array
 * Return: return 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

