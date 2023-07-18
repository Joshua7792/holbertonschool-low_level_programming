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
	/* Check if d is not NULL */
	if (d != NULL)
	{
		/* Free the name field */
		free(d->name);

		/* Free the owner field */
		free(d->owner);

		/* Free the dog_t structure */
		free(d);
	}
}
