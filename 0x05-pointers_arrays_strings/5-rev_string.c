#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *rev_string - reverses a string
 *@str - input
 * Return: void
 */
void rev_string(char *str)
{	
	int i, len, temp;
	
	len = strlen(str);
        for(i = 0; i < len/2; i++)
        {
		temp = str[i];
                str[i] = str[len - i - 1];
                s[len - i - 1] = temp;
	}
}
