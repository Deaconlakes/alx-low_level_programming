#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int lek = 1;
	unsigned long int fit = 2;
	unsigned long int l = 1000000000;
	unsigned long int lek1;
	unsigned long int lek2;
	unsigned long int fit1;
	unsigned long int fit2;

	printf("%lu", lek);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", fit);
		fit += lek;
		lek = fit - lek;
	}
	lek1 = (lek / l);
	lek2 = (lek % l);
	fit1 = (fit / l);
	fit2 = (fit % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", fit1 + (fit2 / l));
		printf("%lu", fit2 % l);
		fit1 = fit1 + lek1;
		lek1 = fit1 - lek1;
		fit2 = fit2 + lek2;
		lek2 = fit2 - lek2;
	}
	printf("\n");
	return (0);
}
