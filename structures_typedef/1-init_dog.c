#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * init_dog - initializes struct dog
 * @d: represents the dog being initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner:dog owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
