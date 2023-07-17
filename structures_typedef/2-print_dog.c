#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  function that prints a struct dog
 * @d: pointer of the struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: nil");
		else
			printf("Name: %s", d->name);

		if (d->age < 0)
			printf("Age: nil");
		else
			printf("Age: %f", d->age);

		if (d->owner == NULL)
			printf("Owner: nil");
		else
			printf("Owner: %s", d->owner);

	}
}
