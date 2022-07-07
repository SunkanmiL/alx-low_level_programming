#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
 * @ap: list of arguments passed into the main function
 * Return: Always 0 (Success)
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, n = 0;
	char *sep = ", ";
	char *str;

	va_start(ap, format);
	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), sep);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(ap);
}
