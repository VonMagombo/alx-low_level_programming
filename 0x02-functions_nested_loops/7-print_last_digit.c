#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	n = abs(n);
return (n);
}
