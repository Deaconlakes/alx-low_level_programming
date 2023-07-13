#include <stdio.h>
/**
 * main - print name followed by new line
 * @argc: num of comman line arg
 * @argv: array that contains command line arg
 * Return: 0 if succes
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
