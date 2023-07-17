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
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(name) * strlen(name));

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(owner) * strlen(owner));

	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	strcpy(p->name, name);
	p->age = age;
	strcpy(p->owner, owner);

	return (p);
}
