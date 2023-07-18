#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  function that prints a struct dog
 * @d: pointer of the struct
 */

void print_dog(struct dog *d)
{
	/* Check if the dog is not NULL. */
	if (d != NULL)
	{
		/* Check if the dog's name is NULL. */
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
		{
			/* Print "Name: <dog's name>". */
			printf("Name: %s\n", d->name);
		}

		/* Check if the dog's age is less than 0. */
		if (d->age < 0)
			printf("Age: (nil)\n");
		else
		{
			/* Print "Age: <dog's age>". */
			printf("Age: %f\n", d->age);
		}

		/* Check if the dog's owner is NULL. */
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
		{
			/* Print "Owner: <dog's owner>". */
			printf("Owner: %s\n", d->owner);
		}
	}
}
