#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all the parameters in the function
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list num;

	va_start(num, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
return (sum);
}
