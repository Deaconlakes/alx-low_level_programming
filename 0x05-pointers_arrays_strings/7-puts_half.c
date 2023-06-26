#include "main.h"
/**
 * puts_half - function to print the second half of a string
 * @str: input
 * Return: half of the string
 */
void puts_half(char *str)
{
	int a, b, lent;

	lent = 0;

	for (a = 0; str[a] != '\0'; a++)
		lent++;
	b = (lent / 2);
	if ((lent % 2) == 1)
		b = ((lent + 1) / 2);
	for (a = b; str[a] != '\0'; a++)
		putchar(str[a]);
	putchar('\n');
}
