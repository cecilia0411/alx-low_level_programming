#include "main.h"
/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/
void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
swap_char(s + length, s + i);
i++;
length--;
}
}

/**
 * _strlen - a function that returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * swap_char - function that swaps the character
 * @a: character to swap
 * @b: character to swap
 * Return: void
 */

void swap_char(char *a, char *b)
{
	char i;

	i = *a;
	*a = *b;
	*b = i;
}
