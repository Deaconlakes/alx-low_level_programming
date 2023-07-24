#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - func to print opcodes of the program
 * @a: address to the main function
 * @n: numbers of bytes to print
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%.2hhx", a[i]);
	if (i < n - 1)
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
