#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - A Func that returns the sum of all the data (n) of a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data (n) in the list.
 *         If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
