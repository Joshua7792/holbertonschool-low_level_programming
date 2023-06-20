#include <stdio.h>

/**
 * main - print all possible combinations of a single-digit number
 *
 * Return: Always (0)
 */

int main(void)
{
	int j, s;

	for (j = '0' ; j <= '9' ; j++)
	{
		for (s = '0' ; s <= '9' ; s++)
			putchar (',');
			putchar (' ');
	}
			putchar (j);
			putchar (s);






		return (0);
}
