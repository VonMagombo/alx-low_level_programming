#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...) 
{
	va_list list;
    	const char *fmt = format;
    	int char_arg;
    	int int_arg;
    	double float_arg;
    	char *str_arg;

	va_start(list, format);
    	while (*fmt != '\0') 
	{
        	if (*fmt == 'c')
		{
            		char_arg = va_arg(list, int);
            		printf("%c", char_arg);
        	}
		else if (*fmt == 'i') 
		{
            		int_arg = va_arg(list, int);
            		printf("%d", int_arg);
        	}
		else if (*fmt == 'f') 
		{
			float_arg = va_arg(list, double);
            		printf("%f", float_arg);
        	}
		else if (*fmt == 's') 
		{
			str_arg = va_arg(list, char*);
            		if (str_arg == NULL) 
			{
                		printf("(nil)");
           		} 
			else 
			{
                		printf("%s", str_arg);
            		}
        	}
        	if ((*(fmt + 1) != '\0') && (*fmt == 'c' || *fmt == 'i' || *fmt == 'f' || *fmt == 's')) 
		{
        		printf(", ");
        	} 
       		fmt++;
    	}
	printf("\n");
    	va_end(list);
}
