#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: input string to be converted
 * Return: int 
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	j = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && j == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (j == 0)
		return (0);

	return (n);
}
/**
 * main - multiplies two numbers
 * @argc: total number of arguments
 * @argv: array storing arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int answer, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	answer = num1 * num2;
	printf("%d\n", answer);
return (0);
}
