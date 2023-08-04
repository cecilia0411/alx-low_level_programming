#include "main.h"

/**
 * _strchr - prints from the first occurrence of a char.
 * @s: source string
 * @c: character
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
