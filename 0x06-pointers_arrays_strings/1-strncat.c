#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: amount of bytes used from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lendest;
	int lensrc;
	int i;

	for (lendest = 0; dest[lendest] != '\0'; lendest++)
	{
	}
	for (lensrc = 0; src[lensrc] != '\0'; lensrc++)
	{
	}
	if (n > lensrc)
	{ n = lensrc; }
	for (i = 0; i < n; i++)
	{
	dest[i + lendest]  = src[i];
	}
return (dest);
}
