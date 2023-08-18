#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: the number of integers.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	va_start(sum, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(sum,int));
		if (separator != NULL && (i < n - 1) )
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(sum);
}
