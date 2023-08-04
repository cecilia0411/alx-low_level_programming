#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; i < lensrc; i++)
	{
	dest[i + lendest]  = src[i];
	}
return (dest);
}
