#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and then in uppercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char upper = 65;
	char lower = 97;

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

