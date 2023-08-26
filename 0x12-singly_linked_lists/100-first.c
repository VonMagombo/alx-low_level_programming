#include <stdio.h>
/**
 * prior - function executed before main
 * Return: void.
 */
void __attribute__((constructor)) prior()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
