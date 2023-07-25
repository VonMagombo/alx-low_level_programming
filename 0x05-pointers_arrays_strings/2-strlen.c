#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - checks if the parameter is a string
 * @*s: input
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	while(*s != '\0')
	{
		len++;
		s++;
	}
return (len);
}
