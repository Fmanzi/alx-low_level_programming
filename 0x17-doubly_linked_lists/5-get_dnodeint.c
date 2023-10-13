#include "lists.h"

/**
 * get_dnodeint_at_index - fn returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of the node to retrieve (starting from 0)
 * Return: the nth node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head != NULL)
{
if (count == index)
return (head);
head = head->next;
count++;
}

return (NULL);
}
