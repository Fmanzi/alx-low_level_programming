#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - fn inserts a new node at a given position
 * @h: pointer to a pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value to store in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i = 0;

if (h == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

while (temp != NULL && i < idx)
{
i++;
temp = temp->next;
}

if (i != idx)
{
free(new_node);
return (NULL);
}

new_node->next = temp;
new_node->prev = temp->prev;
if (temp->prev != NULL)
temp->prev->next = new_node;
temp->prev = new_node;

return (new_node);
}
