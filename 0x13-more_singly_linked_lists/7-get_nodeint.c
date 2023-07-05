#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A func returns the nth node of a linked list.
 * @head: A pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: If the node exists, return a pointer to the nth node.
 *         If the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}
return (NULL);
}
