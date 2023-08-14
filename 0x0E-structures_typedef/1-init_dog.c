#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the struct
 * @d: the struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: name of dog's owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
