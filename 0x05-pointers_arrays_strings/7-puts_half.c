#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of the string
 * Return: void.
 */
void puts_half(char *str)
{
	int i, n, m;
	n = strlen(str) / 2;
	m = (strlen(str) - 1);
	for (i = n; i <= m ; i++)
	{	
		_putchar(str[i]);
	}
	_putchar('\n');
}
