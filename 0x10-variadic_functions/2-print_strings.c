#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be between strings.
 * @n: the number of strings passed.
 * @...: a number of strings to be printed.
 * Return: always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list word;
	unsigned int i;
	char *str;

	va_start(word, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(word, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if ((i < n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(word);
}
