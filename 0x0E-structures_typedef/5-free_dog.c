#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Entry Point
 * @d: struct to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
