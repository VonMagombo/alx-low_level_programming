#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name using pointer to function
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
