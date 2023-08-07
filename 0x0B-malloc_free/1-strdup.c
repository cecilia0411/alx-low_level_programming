#include "main.h"

/**
 * _strdup- copy a string
 * @str: string
 * Return: pointer to the string
 */

char *_strdup(char *str)
{
	int size, i;
	char *copy;

	size = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + size))
		size++;
	size++; /* add 1 to print NULL*/
	copy = malloc((size) * sizeof(char));
	if (copy == NULL)
		return (0);
	for (i = 0; i < (size); i++)
		*(copy + i) = *(str + i);
	return (copy);
}
