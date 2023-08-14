#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;
	int lName, lOwner, i;

	newd = malloc(sizeof(struct dog));
	if (newd == NULL)
		return (NULL);

	for (lName = 0; *(name + lName); lName++)
		;
	lName++;
	for (lOwner = 0; *(owner + lOwner); lOwner++)
		;
	lOwner++;

	newd->name = malloc(lName * sizeof(char));
	if (newd->name == NULL)
	{
		free(newd);
		return (NULL);
	}
	for (i = 0; i < lName; i++)
		*(newd->name + i) = *(name + i);

	newd->age = age;

	newd->owner = malloc(lOwner * sizeof(char));
	if (newd->owner == NULL)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}
	for (i = 0; i < lOwner; i++)
	*(newd->owner + i) = *(owner + i);

	return (newd);
}
