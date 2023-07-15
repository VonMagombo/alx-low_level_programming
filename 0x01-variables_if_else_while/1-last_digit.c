#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or is 0.
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else
	{	
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
return (0);
}
