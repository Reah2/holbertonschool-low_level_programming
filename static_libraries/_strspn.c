#include "main.h"

/**
 * _strspn - Function that gets the length of the prefix substring
 * @s: string to search in
 * @accept: bytes to search for
 * Return: number of bytes in initial segments
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, z, count, checker;

	i = 0;
	z = 0;
	checker = 0;
	count = 0;

	while (s[i] != '\0')
	{
		z = 0;
		checker = 0;

		while (accept[z] != '\0')
		{
			if (accept[z] == s[i])
			{
				count++;
				checker = 1;
				break;
			}
			z++;
		}

		if (checker == 0)
			return (count);

				i++;
	}
	return (count);
}
