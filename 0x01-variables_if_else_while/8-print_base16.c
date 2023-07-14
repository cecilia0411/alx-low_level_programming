#include <stdio.h>

/**
 * main - print all numbers of a base 16 in lowercase
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
