#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: input 
 * @av: pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n;
	int j = 0; 
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			len++;
		}
	}
	len =len + ac;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[j] = av[i][n];
			j++;
		}
		if (str[j] == '\0')
		{
			str[j++] = '\n';
		}
	}
return (str);
}
