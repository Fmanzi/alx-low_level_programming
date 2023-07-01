#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A func that adds a new node at the end of a list.
 * @head: Pointer to pointer to the head of the list.
 * @str: str to be duplicated and added to new node.
 *
 * Return: address of the new element, NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node;
char *str_copy;
unsigned int len = 0;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
str_copy = strdup(str);
if (str_copy == NULL)
{
free(new_node);
return (NULL);
}
while (str[len])
len++;
new_node->str = str_copy;
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
}
return (new_node);
}
