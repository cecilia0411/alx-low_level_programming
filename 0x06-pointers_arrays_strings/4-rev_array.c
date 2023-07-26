#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @n: size
  * @a: array
  * Return: no return
 **/

void reverse_array(int *a, int n)
{
	int rev = 0, i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < (n - i - 1); j++)
	{
	rev = a[j + 1];
	a[j + 1] = a[j];
	a[j] = rev;
	}
	}
}
