#include "main.h"

/**
 *string_toupper - changing lowercase to uppercase
 *@str: pointer to the string
 *Return: t var
 */

char *string_toupper(char *str)
{
int length;

	for (length = 0 ; str[length] != '\0' ; length++)
	{
		if (str[length] >= 'a' && str[length] <= 'z')
		{
			str[length] = str[length] - 32;
		}
	}
	return (str);

}
