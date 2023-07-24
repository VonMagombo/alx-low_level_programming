#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string, starting with the first character followed by a new line.
 * Return: void.
 */
void puts2(char *str)
{
	int i, midpoint;
	int multiply;

	midpoint = (strlen(str)-1)/2;

	for(i = 0; i <= midpoint; i++)
	{
		multiply = (str[i] * 2);
		_putchar(multiply);
	}
	_putchar('\n');
}
