#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - operator
 * @s: operator to perform
 *
 * Return: pointer of function name
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"%", op_mod},
{"/", op_div},
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].op != NULL && s[1] == '\0')
{
if (ops[i].op[0] == *s)
return ((ops[i].f));
i++;
}
return (NULL);
}

