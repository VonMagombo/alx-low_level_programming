#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to perform the operation requested.
 * @s: the operator passed.
 * Return: a pointer to the function`.
 */
int (*get_op_func(char *s))(int, int)
{
	int j = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;
return (ops[j].f);
}
