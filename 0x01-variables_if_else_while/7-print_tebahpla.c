#include <stdio.h>

/**
 * main - alphabets in reverse
 *
 * Return: 0 when successfull
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
