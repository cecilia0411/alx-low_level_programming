#include "main.h"

/**
* leet - function that encode a string
* @n: string to be encoded
* Return: string encoded
*/

char *leet(char *n)
{
	int j, i = 0;
	char x[] = "aAeEoOtTlL";
	char y[] = "43071";

	while (n[i] != '\0')
	{
	for (j = 0; j < 10; j++)
	{
	if (n[i] == x[j])
	{
	n[i] = y[j / 2];
	}
	}
	i++;
	}

return (n);
}
