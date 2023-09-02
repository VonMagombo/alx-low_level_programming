#include "main.h"
/**
 * binary_to_uint - converts a number to binary
 * @b: parameter
 * Return: number converted or 0 if there is no binary valuei.
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
            		return 0;
        	}
        	result = (result << 1) | (b[i] - '0'); 
        	i++;
    	}
	return (result);
}

	
