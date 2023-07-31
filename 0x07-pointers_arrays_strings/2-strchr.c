#include "main.h"

/**
 * _strchr - prints from the first occurrence of a char.
 * @s: source string
 * @c: character
 * Return: pointer to occurence of c or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
