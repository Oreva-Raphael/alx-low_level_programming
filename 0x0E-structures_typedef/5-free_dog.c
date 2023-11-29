#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees alocated memory
*
* @d: pointer to allocated memory
* Return: void
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
