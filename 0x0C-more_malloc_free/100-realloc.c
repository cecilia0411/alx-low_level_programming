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
	void *reloc;
	unsigned int i;

	if (ptr == NULL)
	{
		reloc = malloc(new_size);
		return (reloc);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		reloc = malloc(new_size);
		if (reloc != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)reloc + i) = *((char *) ptr + i);
			free(ptr);
			return (reloc);
		}
		else
			return (NULL);
	}
}
