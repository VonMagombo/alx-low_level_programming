#include "main.h"
int check_pal(char *s, int i, int l);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string to reverse
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the string recursively for a palindrome
 * @s: input string 
 * @i: loop
 * @l: string length 
 * Return: 1 if palindrome, otherwise 0
 */
int check_pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
	{
		return (0);
	}
	if (i >= l)
	{
		return (1);
	}
return (check_pal(s, i + 1, l - 1));
}
