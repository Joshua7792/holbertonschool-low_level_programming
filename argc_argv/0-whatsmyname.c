#include <stdio.h>
#include "main.h"

/**
 *@argc: counts the arguments
 *@argv: arguments of the array
 *Return: 0
 */

int main (int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc ; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return 0;
}
