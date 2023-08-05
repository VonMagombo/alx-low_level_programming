#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program and then a new line
 * @argc: total number of arguments
 * @argv: array storing arguments
 * Return: Always 0 
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
return (0);
}
