#include "main.h"
/**
 * print_binary - prints the binary representation of a numnber
 * @n: unsigned long, number to be represented in binary
 */
void print_binary(unsigned long int n) 
{
	int bitCount = sizeof(unsigned long int) * 8; 
	unsigned long int mask;
    int i, bit, leadingZero = 1;

    if (n == 0) 
	{
        _putchar('0');
        return;
    }
    for (i = bitCount - 1; i >= 0; i--) 
	{
        mask = 1UL << i; 
        bit = (n & mask) ? 1 : 0;      

        if (bit) 
		{
            leadingZero = 0; 
            _putchar('1');
        } 
		else if (!leadingZero) 
		{
            _putchar('0');
        }
    }
}

