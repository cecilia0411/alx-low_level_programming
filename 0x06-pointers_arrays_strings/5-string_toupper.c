#include "main.h"

/**
* string_toupper - lowercases letters of a string to uppercase
* @s: string
* Return: no return
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] < 123 && s[i] > 96)
	{
	s[i] = (s[i] - 32);
	}
	i++;
	}
return (s);
}
