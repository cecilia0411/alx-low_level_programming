#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
* @nmemb: number of elements
* @size: size of the memory
* Return: poiner to the address of the memory block
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc = malloc(nmemb * size);
	if (alloc != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			alloc[i] = 0;
		return (alloc);
	}
	else
		return (NULL);
}
