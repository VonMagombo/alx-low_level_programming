#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc function
 * @b: number of bytes to be allocated
 * Return: a ptr to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem_ptr;

	mem_ptr = malloc(b);

	if (mem_ptr == NULL)
		exit(98);

	return (mem_ptr);
}
