#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new buffer containing s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int s1cnt, s2cnt, sizeBuff, i;

	/*Check for valid strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1cnt = 0; s1[s1cnt]; s1cnt++)
		;
	for (s2cnt = 0; s2[s2cnt]; s2cnt++)
		;
	sizeBuff = s1cnt + s2cnt + 1;
	p = malloc(sizeBuff * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < sizeBuff; i++)
		i < s1cnt ? (a[i] = s1[i]) : (a[i] = s2[i - s1cnt]);
	return (a);
}
