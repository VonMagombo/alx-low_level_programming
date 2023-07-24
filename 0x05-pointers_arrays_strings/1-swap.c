#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of the two variables with the aid of a temporary variable.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
