#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n = 0;

if (*head == NULL)
return (0);
n = (*head)->n;

temp = *head;
*head = (*head)->next;

free(temp);

return (n);
}
