#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: input string.
 * @s2: input string.
 * Return: string.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len1;
	int len2;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while(s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while(s2[len2] != '\0')
	{	
		len2++;
	}
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if(new_str == NULL)
	{
		return (NULL);
	}
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		new_str[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		new_str[len1] = s2[len2];
		len1++, len2++;
	}
	new_str[len1] = '\0';
return(new_str);
}
