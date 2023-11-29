#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of the list_t list.
 *
 * @L: the list_t list
 *
 * Return: the number of node L.
 *
 */

size_t print_list(const list_t *L)
{
size_t nodes = 0;

while (L)
{

if (L->str == NULL)

printf("[0] (nill)\n");

else

printf("[%d] %s\n", L->len, L->str);


nodes++;

L = L->next;

}

return (nodes);

}
