#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated for the dog struct
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
