#include <stdio.h>

/**
 * main - print alphabet upper case and lower case
 *
 * Return: 0 when successfull
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for ((i = 0); i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
