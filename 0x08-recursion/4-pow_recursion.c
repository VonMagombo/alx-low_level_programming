#include "main.h"
/**
 * pow_recursion - it  returns the value of x raised to the power of y
 * @x: base value
 * @y: power or exponent
 * Return: result of the calculation.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
return (x * _pow_recursion(x, y - 1));
}
