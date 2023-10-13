#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - fn deletes the node at a given index of a dlistint_t linked list.
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node that should be deleted (starting at 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
dlistint_t *temp;
unsigned int i = 0;

if (current == NULL)
return (-1);

if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

while (i < index)
{
if (current == NULL)
return (-1);
current = current->next;
i++;
}

if (current == NULL)
return (-1);

if (current->prev != NULL)
current->prev->next = current->next;

if (current->next != NULL)
current->next->prev = current->prev;

temp = current->next;
free(current);
return (1);
}
