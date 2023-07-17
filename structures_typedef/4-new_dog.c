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
	int leng1, leng2;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	leng1 = strlen(name) + 1;
	p->name = malloc(leng1);

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	leng2 = strlen(owner) + 1;
	p->owner = malloc(leng2);

	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	memcpy(p, name, leng1);
	p->age = age;
	memcpy(p, owner, leng2);

	return (p);
}
