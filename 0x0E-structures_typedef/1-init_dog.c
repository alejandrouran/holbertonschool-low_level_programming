#include "dog.h"

/**
 * init_dog - initialize a variable of type
 * @d: pointer
 * @name: pointer name
 * @age: pointer age
 * @owner: pointer owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
