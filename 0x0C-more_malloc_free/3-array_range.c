#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number
* @max: largest value
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *ran;
	int i, j = 0;

	if (min > max)
		return (NULL);
	ran = malloc(sizeof(*ran) * ((max - min) + 1));
	if (ran != NULL)
	{
		for (i = min; i <= max; i++)
		{
			ran[j] = i;
			j++;
		}
		return (ran);
	}
	else
		return (NULL);

}
