#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - checks if an integer is a prime number or not
 * @n: input number to evaluate
 * Return: 1 if prime number, otherwise 0 
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: loop
 * Return: 1 if prime else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
return (actual_prime(n, i - 1));
}
