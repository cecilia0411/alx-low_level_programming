#include "main.h"

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @m: squared number
 * Return: the square root of n
 */

int _sqrt(int n, int m)
{
	if (n > m / 2)
		return (-1);
	else if (n * n == m)
		return (n);
	return (_sqrt(n + 1, m));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number tested
* Return: square root of n
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
