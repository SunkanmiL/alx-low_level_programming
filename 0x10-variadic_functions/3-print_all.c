#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - function that prints character
 * @ap: list of arguments passed into the main function
 * Return: Always 0 (Success)
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - function that prints integer
 * @ap: list of arguments passed into the main function
 * Return: Always 0 (Success)
 */

void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - function that prints float
 * @ap: list of arguments passed into the main function
 * Return: Always 0 (Success)
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - function that prints string
 * @ap: list of arguments passed into the main function
 * Return: Always 0 (Success)
 */

void print_s(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = ("(nil)");
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: Always 0 (Success)
 */

void print_all(const char * const format, ...)
{
	char *sep = ", ";
	int i, n;
	va_list ap;

	print_t list[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_s},
		{NULL, NULL},
	};

	va_start(ap, format);
	i = 0;
	while ((format != NULL) && (format[i] != '\0'))
	{
		n = 0;
		while (list[n].name != NULL)
		{
			if (*(list[n].name) == format[i])
			{
				printf("%s", sep);
				list[n].type(ap);
				sep = "";
			}
			n++;
		}
		i++;
		n = 0;
	}
	printf("\n");
	va_end(ap);
}
