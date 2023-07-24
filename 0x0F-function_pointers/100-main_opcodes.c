#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - func to print opcodes of the program
 * @i: address to the main function
 * @n: numbers of bytes to print
 * Return: void
 */
void print_opcodes(char *i, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
	printf("%2.hhx", i[a]);
	if (a < n - 1)
		printf(" ");
	}
	printf("\n");
}
/**
 * main - print the opcodes of its own main func
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
