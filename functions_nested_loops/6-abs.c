#include "main.h"

/**
 * _abs - Computes the absolute value for the integer.
 * @c: The number to be computed
 * Return: Absolute value for the number or zero
 */

int _abs(int c)
{
if (c < 0)
{
int abs_value;
abs_value = c * -1;
return (abs_value);
}
return (c);
}
