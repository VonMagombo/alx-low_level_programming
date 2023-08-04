#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * sqrt_recursion - it returns the natural square root of a number
 * @n: input number
 * Return: the square root of input number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find the natural square root of a number
 * @n: input number 
 * @i: loop
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
return (actual_sqrt_recursion(n, i + 1));
}
