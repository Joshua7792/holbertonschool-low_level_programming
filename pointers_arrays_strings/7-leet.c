#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: given string
 * Return: the value of the string
 */
char *leet(char *s)
{
	int j;

	char *ptr = s;
	char let[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char num[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (; *ptr != '\0'; ptr++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*ptr == let[j])
			{
				*ptr = num[j];
			}
		}
	}
	return (s);
}
