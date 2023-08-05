#include "main.h"
/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[j] = src[k];
	j++;
	k++;
	}
	dest[j] = '\0';
	return (dest);
}
