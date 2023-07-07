#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function name
 * @argc: argument
 * @argv: pointer argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}
	return (0);
}
