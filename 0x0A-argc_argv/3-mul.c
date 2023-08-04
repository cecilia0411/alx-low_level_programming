#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of two arguments
 * @argc: argument count or size of arguments
 * @argv: argument vector
 * Return: 1 if are less of 2 arguments otherwise 0
 */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
