#include "dog.h"
/**
* init_dog - initialize struct variable
* @d: struct variable
* @name: struct element
* @age: struct element
* @owner: struct element
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;

}
