#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: The original linked list
 *
 * @str: The string to store in the list.
 *
 * Return: the address of the head.
 *
 */


list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current_node = *head;
size_t n;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)

return (NULL);
new_node->str = strdup(str);
for (n = 0; str[n]; n++)

new_node->len = n;

new_node->next = NULL;

*head = current_node->next;

if (current_node == NULL)
{
*head = new_node;
}
else
{
while (current_node->next != NULL)
current_node = current_node->next;
current_node->next = new_node;
}
free (new_node);
return (*head);
}
