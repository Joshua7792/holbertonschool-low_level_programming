#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer
 */

void rev_string(char *s)
{
	int length = 0;
	int beg;
	int end;
	char tmp;

	for (; s[length] != '\0'; length++)
	;

	end = length - 1;

	for (beg = 0; beg < length / 2; beg++)
	{
		tmp = s[beg];
		s[beg] = s[end];
		s[end] = tmp;
		end--;
	}
}


