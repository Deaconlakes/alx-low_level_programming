#include  "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - function that select correct func to perform
 * the arithmetic operation
 * @s: operator argument
 *
 * Return: the result of the selected option
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},

	};
	int i;

	/* initiate i */
	i = 0;

	/* if it does not match any operation */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f); /* return op */
}
