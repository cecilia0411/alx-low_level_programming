#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins to make change
* @argc: arguments count
* @argv: argument vectors
* Return: returns 1 if there is an error; else returns 0
*/

int main(int argc, char *argv[])
{
int change, coins = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
change = atoi(argv[1]);
while (change > 0)
{
	coins++;
	if ((change - 25) >= 0)
	{
		change -= 25;
		continue;
	}
	if ((change - 10) >= 0)
	{
		change -= 10;
		continue;
	}
	if ((change - 5) >= 0)
	{
		change -= 5;
		continue;
	}
	if ((change - 2) >= 0)
	{
		change -= 2;
		continue;
	}
	change--;
}
printf("%d\n", coins);
return (0);
}

