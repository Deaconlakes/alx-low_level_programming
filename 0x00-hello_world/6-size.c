#include <stdio.h>
/**
 * main - program that print sizes of data type
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int a;
	float b;

	printf("Size of a char: %lu byte(s)\n", sizeof(i));
	printf("Size of an int: %lu byte(s)\n", sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", sizeof(k));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a float: %lu byte(s)\n", sizeof(b));
	return (0);
}
