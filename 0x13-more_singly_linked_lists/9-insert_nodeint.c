#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: Integer value to set in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = NULL;
listint_t *temp = *head;
unsigned int i = 0;

if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

while (temp != NULL)
{

if (i == idx - 1)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
temp = temp->next;
i++;
}

return (NULL);
}
