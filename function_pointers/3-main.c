#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - main function
 *@argc: argument counter
 *@argv: argument vector
 *Return: function that would do the operation of the function get_up
 */
int main(int argc, char *argv[])
{
	int a1, a2;
	/* declare a function pointer */
	int (*result)(int, int);

	/* check if argc is not equal to 4 */
	if (argc != 4)
	{
		/* print error message and exit with status 98 */
		printf("Error\n");
		exit(98);
	}
	/* convert argv[1] and argv[3] to int */
	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	/* check if op_func(argv[2]) is NULL */
	if (get_op_func(argv[2]) == NULL)
	{
		/* print error message and exit with status 99 */
		printf("Error\n");
		exit(99);
	}
	/* check if argv[2] is / or % and n2 is 0 */
	if ((atoi(argv[2]) == atoi("/") || atoi(argv[2]) == atoi("%")) && a2 == 0)
	{
		/* print error message and exit with status 100 */
		printf("Error\n");
		exit(100);
	}
	/* get the function pointer for argv[2] */
	result = get_op_func(argv[2]);

	/* print the result of result(n1, n2) */
	printf("%d\n", result(a1, a2));
	return (0);
}
