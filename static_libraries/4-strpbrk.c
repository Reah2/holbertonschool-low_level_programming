#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Function that searches a string
 *
 * @s: Where the string is located
 *
 * @accept: emmanuel
 *
 * Return: Pointer to s that matches accept, NULL if nothing
 *
 */



char *_strpbrk(char *s, char *accept)

{

	unsigned int i, z;

	i = 0;

	z = 0;

	while (s[i] != '\0')

	{

		z = 0;

		while (accept[z] != '\0')

		{

			if (s[i] == accept[z])

				return ((s + i));

			z++;

		}

		i++;

	}

	return (NULL);

}
