#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function tha locates a character in a string
 *
 * @s: String to search for the character
 *
 * @c: char to search for.
 *
 * Return: pointer to character s or NULL is nothing
 *
 */

char *_strchr(char *s, char c)

{

	int i;

	i = 0;

	while (s[i] != '\0')

	{

		if (s[i] == c)

			return ((s + i));

		i++;

	}

	if (c == '\0')

		return ((s + i));

	return (NULL);

}
