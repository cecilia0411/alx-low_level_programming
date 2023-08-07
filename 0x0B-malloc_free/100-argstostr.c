#include "main.h"

/**
 * argstostr - concatenates all arguments of program.
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer to new buffer with all arguments as 1 string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *a;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	i = j = k = len = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}
	a = (char *)malloc(k * sizeof(char) + ac + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, len++)
			a[len] = av[i][j];
		a[len] = '\n';
		len++;
	}
	a[len] = '\0';
	return (a);
}
