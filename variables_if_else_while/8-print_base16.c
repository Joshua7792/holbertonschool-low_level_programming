#include <stdio.h>
/**
 * main - Print alphabet
 * Return: Always (0)
 */

int main(void)
{
	char alpha;

	for (alpha = '0' ; alpha <= '9' ; alpha++)
		putchar (alpha);

	for (alpha = 'a' ; alpha <= 'f' ; alpha++)
		putchar (alpha);
	putchar ('\n');


		return (0);
}
