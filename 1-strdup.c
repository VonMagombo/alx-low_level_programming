#include "main.h"i
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns apointer to a newly allocated space in memory
 * @str: the size of the memory to print
 * Return: string.
 */
char *_strdup(char *str)
{	
	int j, i;
	char *dup;

	if(str == NULL)
	{
		return NULL;
	}
	i = 0;
	while(str != '\0')
	{
		i++
	}
	dup = malloc(sizeof(char) * (i+1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		dup[j] = str[j];
	}
return(dup);	
}
