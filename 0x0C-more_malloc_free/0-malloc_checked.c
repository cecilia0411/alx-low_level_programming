#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: the string
 */

void *malloc_checked(unsigned int b)
{
	void *meloc;

	meloc = malloc(b);
	if (meloc == NULL)
		exit(98);
	return (meloc);
}
