#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new buffer containing s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *con;

	i = 0;
	size1 = 0;
	size1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + size1))
		size1++;
	while (*(s2 + size2))
		size2++;
	size2++; /*add 1 space to print null*/

	con = malloc((size1 + size2) * sizeof(char));
	if (con == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(con + i) = *(s1 + i);
	for (i = size1; i < (size1 + size2); i++)
		*(con + i) = *(s2 + i - size1);

	return (con);
}
