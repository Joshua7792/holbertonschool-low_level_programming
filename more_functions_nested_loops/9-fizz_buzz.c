#include <stdio.h>
/**
 * main - The Fizz-Bizz test.
 * Return: Counting
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");

		else if (a % 3 == 0)
			printf("Fizz ");

		else if (a % 5 == 0)
			if (a != 100)
				printf("Buzz ");

			else
				printf("Buzz");
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}
