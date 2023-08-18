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
	char *str;
    	int printed, i = 0;

	va_start(list, format);
    	while (format[i] != '\0') 
	{
        	switch (format[i]) 
		{
            		case 'c':
                		printf("%c", va_arg(list, int));
               			printed = 1;
                		break;
           		case 'i':
                		printf("%d", va_arg(list, int));
                		printed = 1;
                		break;
            		case 'f':
                		printf("%f", va_arg(list, double));
                		printed = 1;
                		break;
            		case 's':
				str = va_arg(list, char *);
              	 		if (str != NULL) 
                    			printf("%s", str);
				else 
                    			printf("(nil)");
                		printed = 1;
                		break;
			default:
				i++;
				continue;
        	}
        	if ((format[i] + 1) != '\0' && printed) 
		{
			printf(", ");
        	}
        	i++;
        	printed = 0;
    	}
	printf("\n");
	va_end(list);
}
