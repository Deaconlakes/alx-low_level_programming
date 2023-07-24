#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to perform calculator on comm line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: results of calc function execution
 */
int main(int argc, char *argv[])
{
	char *op; /* ops */
	int num1, num2; /* number input */

	if (argc != 4) /* checking argument true or false */
	{
		printf("Error\n");
		exit(98);
	}

	/* set comm arg input */
	num1 = atoi(argv[1]); /* number 1 input */
	op = (argv[2]); /* operator input */
	num2 = atoi(argv[3]); /* number 2 input */

	/* if op not in op list */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* if user input is to perform division or modulus by 0 */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* print result of op */
	printf("%d\n", get_op_func(op) (num1, num2));
	return (0);
}
