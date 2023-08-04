#include "main.h"
#include <stdio.h>

/**
 * str_recursion - returns the length of a string.
 * @s: String input
 * Return: String length.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
return (len);
}
