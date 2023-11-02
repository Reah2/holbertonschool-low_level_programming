#include "main.h"

/**
 * _memset - Function fills the memory with the constant byte
 *
 * @b: Constant byte b
 *
 * @n: number of bytes
 *
 * @s:pointer to memory
 *
 * Return: a pointer to a memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;

	i = 0;

	while (i < n)

	{

		s[i] = b;

		i++;

	}

	return (s);

}
