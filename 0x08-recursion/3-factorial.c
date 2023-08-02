#include "main.h"

/**
* factorial - searchs for the factorial of a number
* @n: number of factorial
* Return: the factorial of the number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
