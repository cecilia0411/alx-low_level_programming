#include "main.h"

/**
* is_prime - return number to prime
* @i: number to be checked
* @j: number to check
* Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int i, int j)
{
	if (j <= 1)
		return (1);
	else if (i % j == 0)
		return (0);
	return (is_prime(i, j - 1));
}

/**
* is_prime_number - returns true if the number is prime
* @n: number to check
* Return: 1 if is prime, otherwise 0
*/

int is_prime_number(int n)
{
	int j = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, j));
}
