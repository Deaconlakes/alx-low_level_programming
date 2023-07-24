#include "variadic_functions.h"
/**
 * print_all - func to print all arg provided
 * @format: the argument specifier
 *
 * Return: arg given by specifier
 */
void print_all(const char * const format, ...)
{
	int i, check_stat; /* declare var and va_arg datatype */
	char *str;

	va_list spc;

	va_start (spc, format); /* init var arg */
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check_stat = 0; /* check if it met condition*/
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				check_stat = 0;
				break;
			case 'c':
				str = va_arg(spc, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				check_stat = 0;
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0) /* if not null */
			printf(", ");
		i++; /* update step of iteration var */
	}
	printf("\n");
	va_end(spc); /* end traversal */
}
