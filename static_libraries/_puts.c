#include "main.h"

/**
 * _puts - Function that print a string
 *
 * @str: - pointer to the string
 *
 * Return: String and a new line
 *
 */

void _puts(char *str)

{

	int i = 0;

	while (str[i])

		{

		_putchar(str[i]);

		i++;

		}

	_putchar('\n');

}
