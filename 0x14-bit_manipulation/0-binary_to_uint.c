#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i= 0;
	int usigned int result = 0;

	if (b == NULL)
        return (0);

    	while (b[i] != '\0')
	{
        	if (b[i] != '0' && b[i] != '1')
		{
            		return 0;  // Invalid character found
        	}
        	result = (result << 1) | (b[i] - '0'); // Shift left and add the binary digit
        	i++;
    	}

	return (result);
}

	
