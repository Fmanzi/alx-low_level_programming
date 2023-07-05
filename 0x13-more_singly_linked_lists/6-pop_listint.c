#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - A fucn that deletes the head node of a linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: The data (n) stored in the deleted head node.
 *         If the linked list is empty, return 0.
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (head == NULL || *head == NULL)
return 0;

temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);
return (data);
}

