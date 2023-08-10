#include "main.h"

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory
* @old_size: size of ptr
* @new_size: size of the memory
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *reall, *p;

	p = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	reall = malloc(new_size);
	if (reall == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		*(reall + i) = *(p + i);

	free(ptr);
	return (reall);
}
