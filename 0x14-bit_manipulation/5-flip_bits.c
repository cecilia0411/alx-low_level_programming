#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: parameter 1
 * @m: parameter 2
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int flip;
	unsigned long int bits = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		flip = bits >> i;
		if (flip & 1)
			count++;
	}

	return (count);
}
