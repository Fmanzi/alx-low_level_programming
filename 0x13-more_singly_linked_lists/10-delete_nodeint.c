#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (starting at 0).
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

temp = *head;
prev = NULL;
while (temp != NULL)
{

if (i == index)
{
prev->next = temp->next;
free(temp);
return (1);
}
prev = temp;
temp = temp->next;
i++;
}

return (-1);
}
