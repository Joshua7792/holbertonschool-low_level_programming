#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if the `d` pointer is not NULL. */
	if (d != NULL)
	{
		/**
		 * Assign the `name`, `age`, and `owner` arguments to the
		 * corresponding members of the `struct dog` variable.
		 */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
