#include "main.h"

/**
 * print_triangle - print triangle at given size
 * @size: size of a triangle
 *
 */
void print_triangle(int size)
{
/*
 * int i: used to subtract
 *
 * int margin: will record the amount of white space
 * int dis"tance": is used to offset size
 * int to_print: tell how many '#' will need to print per line
 */
int i, margin, dis;
int to_print;
if (size <= 0)
{
_putchar('\n');
return;
}
dis = size - 1;
for (i = 0 ; i < size ; i++)
{
/*
 * we se the margin to zero
 */
margin = 0;
while (margin < (dis - i))
{
_putchar(32);
margin++;
}
to_print = size - margin;
while (to_print > 0)
{
_putchar('#');
to_print--;
}
_putchar('\n');
}
}
