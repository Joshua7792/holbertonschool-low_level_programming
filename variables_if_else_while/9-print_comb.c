#include <stdio.h>

/**
 * main - print all possible combinations of a single-digit number
 *
 * Return: Always (0)
 */

int main(void)
{
	int j;


	for (j = 48 ; j < 58 ; j++)
	{
		putchar (j);
		if (j < 58)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
