#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that pritns its name,
 * followed by a new line.
 * @argc: Counts arguments
 * @argv: the argument of the array
 * Return: return 0
 */

int main(__attribute__((unused))int argc, char *argv[])
{
		printf("%s\n", argv[0]);
		return (0);
}
