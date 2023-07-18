#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - free function
 * @d: parameter
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
