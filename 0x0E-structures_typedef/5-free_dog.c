#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function
 * @name: name of dog
 * @age: age of doc
 * @owner: owner of dog
 * Return: dog_t
 */

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free((*d).owner);
		free(d->name);
		free(d);
	}
}
