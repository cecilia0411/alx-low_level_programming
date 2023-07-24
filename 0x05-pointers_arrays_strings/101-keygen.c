#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
	int i;
	char c;

	srand(time(0));
	while (i <= 2645)
	{
	c = rand() % 128;
	i += c;
	putchar(c);
	}
	putchar(2772 - i);
	return (0);
}
