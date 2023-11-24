#include "main.h"

/**
* _strcat - This function will concatenate two strings
* @dest: The string that will modify
* @src:Thestring that will be concatenate to @des
* Return: a pointer to @dest
*/
char *_strcat(char *dest, char *src)
{
int index_01 = 0;
int index_02 = 0;
while (dest[index_01] != '\0')
{
index_01++;
}
while (src[index_02] != '\0')
{
dest[index_01 + index_02] = src[index_02];
index_02++;
}
dest[index_01 + index_02] = '\0';
return (dest);
}
