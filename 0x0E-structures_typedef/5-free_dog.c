#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -a fucn that frees dogs
 * @d: pointer to specific dog_t struct to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
