#include "main.h"
/**
 * cap_string - capitalizes all word of a string
 * @str: string
 * Return: return the value of str
 */
char *cap_string(char *str)
{
	int i, n;

	/** Array of separators (characters that indicate word boundaries) */
	char comp[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	/**Loop through each character in the string*/
	for (i = 0 ; str[i] != '\0'; i++)
	{
		/*Capitalize the first character if it's a lowercase letter and the start of the string*/
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;  /**Convert the character to uppercase*/
		}

		/** Loop through the array of separators */
		for (n = 0; n < 13; n++)
		{
			/** Check if the current character is a separator */
			if (str[i] == comp[n])
			{
				/** Check the next character and capitalize it if it's a lowercase letter*/
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;  /* Convert the character to uppercase */
				}
			}
		}
	}

	return (str);  /** Return the modified string*/
}
