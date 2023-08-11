#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory location to be assigned values
 * @b: character to copied
 * @n: number of times to copy b
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr_ptr;

	if (nmemb == 0 || size == 0)
	{	
		return (NULL);
	}
	arr_ptr = malloc(size * nmemb);
	if (arr_ptr == NULL)
	{
		return (NULL);
	}
	_memset(arr_ptr, 0, nmemb * size);
return (arr_ptr);
}
