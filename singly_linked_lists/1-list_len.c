#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Show the number of elements of a list.
 *
 * @L: A linked list
 *
 * Return: the number of elements of a list.
 *
 */

size_t list_len(const list_t *L)
{
size_t count = 0;

while (L)

{

L = L->next;

count++;

}

return (count);

}
