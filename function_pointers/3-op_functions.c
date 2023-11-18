#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - runs addition calculation of a and b
* @a: int value
* @b: int value
*
* Return: Result
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - runs substraction calculation of a and b
* @a: int value
* @b: int value
*
* Return: result
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - runs multiplication calculation of a and b
* @a: int value
* @b: int value
*
* Return: result
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_mod - runs module calculation of a and b
* @a: int value
* @b: int value
*
* Return: result
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

/**
* op_div - runs division calculation of a and b
* @a: int value
* @b: int value
*
* Return: result
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
