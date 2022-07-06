#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *get_op_func - correct function to perform the operation
 * @s: operator passed as argument
 * Return: Always 0 (Success)
 */

int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (*(op_s[i]).op == *s && *(s + 1) == '\0')
			return (op_s[i].f);
		i++;
	}
	return (NULL);
}
