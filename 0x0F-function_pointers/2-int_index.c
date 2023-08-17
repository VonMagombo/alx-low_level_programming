#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - prints each array elem on a newl
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
	{
	return (-1); 
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
return (-1);
}
