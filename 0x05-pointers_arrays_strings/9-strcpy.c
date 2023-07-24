#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - copies a string pointed to by src, to the buffer pointed to by dest
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest,src);
	dest = src;
return dest;
}
