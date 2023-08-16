#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string.
 * @s: string input to evaluate
 * Return: the number of words
 */
int count_word(char *s)
{
	int flag, i, w;

	flag = 0;
	w = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to a strings array (Success) otherwise, NULL (Error)
 */
char **strtow(char *str)
{
	char **grid, *tmp;
	int i, k = 0; 
	int len = 0; 
	int c = 0;
	int start, words, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	grid = (char **) malloc(sizeof(char *) * (words + 1));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				grid[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	grid[k] = NULL;
return (grid);
}
