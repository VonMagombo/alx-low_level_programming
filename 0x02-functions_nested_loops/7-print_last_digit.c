#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int c = 0;

	n = n % 10;
	if (c < 0)
	{	
		c = -1 * c;
	}
	_putchar(c + '0');
return (c);
}
