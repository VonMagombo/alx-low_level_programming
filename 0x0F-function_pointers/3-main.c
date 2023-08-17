#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - prints the result of operations.
 * @argc: the number of arguments entered.
 * @argv: array of pointers to arguments.
 * Return: always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int first_num, second_num;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first_num = atoi(argv[1]);
	op = argv[2];
	second_num = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && second_num == 0) ||
	    (*op == '%' && second_num == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(first_num, second_num));
return (0);
}
