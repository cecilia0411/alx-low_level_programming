#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
