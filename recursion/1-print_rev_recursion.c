#include "main.h"

/**
 *  -print_rev_recursion - Print a String in reverse
 *  @s: the string to reverse.
 *  Return: Nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		return;
	}
	s++;
	_print_rev_recursion (s);
	s--;
	_putchar(*s);
}
