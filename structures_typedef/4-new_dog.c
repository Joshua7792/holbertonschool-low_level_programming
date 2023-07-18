#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: name
 * @age: age
 * @owner: name of owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	/* Allocate a new dog structure. */
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		/* Allocation failed. */
		return (NULL);
	}

	/* Allocate memory for the dog's name. */
	p->name = malloc(strlen(name) * sizeof(name));

	if (p->name == NULL)
	{
		/* Allocation failed. */
		free(p);
		return (NULL);
	}	

	/* Allocate memory for the dog's owner. */
	p->owner = malloc(strlen(owner) * sizeof(owner));

	if (p->owner == NULL)
	{
		/* Allocation failed. */
		free(p->name);
		free(p);
		return (NULL);
	}
	
	/* Copy the dog's name, age and owner into the allocated memory. */
	strcpy(p->name, name);
	p->age = age;
	strcpy(p->owner, owner);

	/* Return the pointer to the new dog structure. */
	return (p);
}
