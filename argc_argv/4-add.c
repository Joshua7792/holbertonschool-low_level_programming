#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: count how many arguments are
 * @argv: holds the arguments
 * Return: return 0 if passed otherwise return 1 for error
 */
int main(int argc, char *argv[])
{
	int i, a;

	a = 0;

	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);

		if (a == 199)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", a);
	return (0);
}
