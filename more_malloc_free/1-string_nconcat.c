#include "main.h"

/**
* string_nconca - Concatenates two strings using at most
* an inputted number of bytes from s1.
*
* @s1: The string to be appended upon.
*
* @s2: The string to be appended to s1.
*
* @n: The number of bytes from s1 to be appended to s2.
*
*Return: A pointer to the resulting string s1.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int index = 0, s1_len = 0;

while (s1[index++])
s1_len++;
for (index = 0; s2[index] && index < n; index++)
s1[s1_len++] = s2[index];
return (s1);
}
