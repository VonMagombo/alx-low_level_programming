#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copies a string pointed to by src, to the buffer pointed to by dest
 *@dest: copy to 
 *@src: copy from
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x)!= '\0')
	{
		x++;
	}
	for(; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
return (dest);
}
