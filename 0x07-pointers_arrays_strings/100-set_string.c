#include "main.h"
/**
 * set_string - function sets the value of a pointer to a char
 * @s: this is a pointer to pointer
 * @to: this is a pointer to char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
