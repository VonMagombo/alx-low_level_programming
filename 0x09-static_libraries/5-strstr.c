#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;
	for (; *haystack != '\0'; haystack++)
	{
		

		while (*h == *n && *h != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
return (0);
}
