#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function
 * @d: p
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

