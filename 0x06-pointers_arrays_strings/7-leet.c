#include "main.h"
/**
 * leet - encodes a string into 1337
 * Return: string.
 */
char *leet(char *str)
{
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "44330711";
	int i, j;
	for  (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_nums[j];
				break;
			}
		}
	}
	return (str);
}
