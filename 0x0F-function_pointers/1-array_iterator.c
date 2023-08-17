#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on each array element
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (j < size)
	{
		action(array[j]);
		j++;
	}
}
