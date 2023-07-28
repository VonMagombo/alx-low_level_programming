#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_buffer - prints buffer
 * @b : buffer
 * @size : size
 * Return: Always 0.
 */

void print_buffer(char *b, int size)
{	
	int i, j;
	char c;

	if (size <= 0)
	{
		printf("\n");
        	return;
    	}
    	for (i = 0; i < size; i += 10)
	{
        	printf("%08x: ", i); 
        	for (j = 0; j < 10; j++)
		{
            		if (i + j < size) 
			{
                		printf("%02x", (unsigned char)b[i + j]);
            		}	 
			else 
			{
                		printf("  "); 
            		}		

            		if (j % 2 != 0)
			{
                		printf(" "); 
            		}	
        	}
		printf(" ");
        	for (j = 0; j < 10; j++)
		{
            		if (i + j < size)
			{
                		c = b[i + j];
                		printf("%c", isprint(c) ? c : '.');
            		} 
			else 	
	    		{
                		printf(" ");
            		}
        	}

        	printf("\n");
    	}
}
