#include "main.h"
/**
  * reverse_array - it reverses the contents of an array of integers
  * @a: an array of integers
  * @n: the number of elements to swap
  * Return: nothing
  */
void reverse_array(int *a, int n)
{
	int temp, i;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
